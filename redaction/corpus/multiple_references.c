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
        // ....
    }
    return gdbackups;
}
