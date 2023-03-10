int gen_pool_add_owner(struct gen_pool *pool, unsigned long virt, phys_addr_t phys,
		 size_t size, int nid, void *owner)
{
	struct gen_pool_chunk *chunk;
	unsigned long nbits = size >> pool->min_alloc_order;
	unsigned long nbytes = sizeof(struct gen_pool_chunk) +
				BITS_TO_LONGS(nbits) * sizeof(long);

	chunk = vzalloc_node(nbytes, nid);
	if (unlikely(chunk == NULL))
		return -ENOMEM;

	chunk->phys_addr = phys;
	chunk->start_addr = virt;
	chunk->end_addr = virt + size - 1;
	chunk->owner = owner;
	atomic_long_set(&chunk->avail, size);

	spin_lock(&pool->lock);
	list_add_rcu(&chunk->next_chunk, &pool->chunks);
	spin_unlock(&pool->lock);

	return 0;
}
EXPORT_SYMBOL(gen_pool_add_owner);