void remove_cs101(list *l, list_item *target)
{
    list_item *cur = l->head, *prev = NULL;
    while (cur != target)
    {
        prev = cur;
        cur = cur->next;
    }
    if (prev)
        prev->next = cur->next;
    else
        l->head = cur->next;
}

void remove_elegant(list *l, list_item *target)
{
    list_item **p = &l->head;
    while (*p != target)
        p = &(*p)->next;
    *p = target->next;
}