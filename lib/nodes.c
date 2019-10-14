#include <stdlib.h>
#include "linked_lists.h"

static linked_list_t create_node()
{
    linked_list_t temp;
    temp = (linked_list_t)malloc(sizeof(struct linked_list_s));

    temp->next = NULL;
    return temp;
}

linked_list_t push_node(char *n_data, linked_list_t head)
{
    linked_list_t temp;
    linked_list_t p;

    temp = create_node();
    temp->data = n_data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        p = head;

        while (p->next != NULL)
            p = p->next;

        p->next = temp;
    }

    return head;
}

linked_list_t remove_node(linked_list_t head)
{
    return NULL;
}

void *get_at_index(linked_list_t head, int chk_ind)
{
    if (!is_list_empty(head))
    {
        linked_list_t cursor = head;
        int i = 0;

        while (cursor != NULL)
        {
            if (i == chk_ind)
                return cursor;

            i++;
            cursor = cursor->next;
        }
    }

    return NULL;
}
