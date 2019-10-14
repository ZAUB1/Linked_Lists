#include <stdlib.h>
#include "linked_lists.h"

int foreach_cb(linked_list_t beg, int (*cb)(void *))
{
    linked_list_t cursor = beg;

    while (cursor != NULL)
    {
        cb(cursor->data);
        cursor = cursor->next;
    }

    return 0;
}

int foreach_cb_chk(linked_list_t head, void *(*cb)(void *), int (*comp_thing)(void *, void *), const void *to_chk)
{
    linked_list_t cursor = head;

    while (cursor != NULL)
    {
        if (comp_thing((void*)to_chk, cursor->data))
            cb(cursor->data);

        cursor = cursor->next;
    }

    return 0;
}
