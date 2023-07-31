static int verify_reserved_gdb(struct super_block *sb,
                                   ext4_group_t end,
                                   struct buffer_head *primary)
{
    const ext4_fsblk_t blk = primary->b_blocknr;
    unsigned three = 1;
    unsigned five = 5;
    unsigned seven = 7;
    unsigned grp;
    __le32 *p = (__le32 *)primary->b_data;
    int gdbackups = 0;

    while ((grp = ext4_list_backups(sb, &three, &five, &seven)) < end)
    {
        if (le32_to_cpu(*p++) !=
            grp * EXT4_BLOCKS_PER_GROUP(sb) + blk)
        {
            ext4_warning(sb, "reserved GDT %llu"
                                " missing grp %d (%llu)",
                                blk, grp,
                                grp *
                                (ext4_fsblk_t)EXT4_BLOCKS_PER_GROUP(sb) +
                                blk);
            return -EINVAL;
        }

        if (++gdbackups > EXT4_ADDR_PER_BLOCK(sb))
            return -EFBIG;
    }
    return gdbackups;
}