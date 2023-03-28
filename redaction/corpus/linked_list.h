struct list_item {
        int value;
        struct list_item *next;
};
typedef struct list_item list_item;

struct list {
        struct list_item *head;
};
typedef struct list list;

size_t size(list *l);
void insert_before(list *l, list_item *before, list_item *item);