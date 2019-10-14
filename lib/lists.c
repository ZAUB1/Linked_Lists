#include <stdlib.h>
#include "linked_lists.h"

int is_list_empty(linked_list_t head)
{
    if (head == NULL)
        return 1;

    return 0;
}

void show_list(linked_list_t head)
{
    if (head == NULL)
        printf("List is empty.");

    linked_list_t cursor = head;

    while (cursor != NULL)
    {
        printf("%s\n", cursor->data);
        cursor = cursor->next;
    }
}

void **to_array(linked_list_t head)
{
    const int len = count_list(head);
    void **arr = malloc(sizeof(void**) * len);

    if (arr == NULL)
        return NULL;

    linked_list_t cursor = head;

    for (int i = 0; i < len; i++)
    {
        //arr[i] = cursor->data;

        //cursor = cursor->next;
    }

    return arr;
}

linked_list_t rev_list(linked_list_t head)
{
    linked_list_t current = head; 
    linked_list_t prev = NULL;
    linked_list_t next = NULL;

    while (current != NULL)
    {
        next = current->next; 

        current->next = prev; 

        prev = current;
        current = next;
    }

    head = prev;

    return head;
}

int count_list(linked_list_t head)
{
    linked_list_t cursor = head;
    int c = 0;

    while (cursor != NULL)
    {
        c++;
        cursor = cursor->next;
    }

    return c;
}

void concat_lists(linked_list_t begin1, linked_list_t begin2)
{
    linked_list_t cursor = begin2;
    linked_list_t _cur = begin1;

    while (cursor != NULL)
    {
        _cur = push_node(cursor->data, _cur);
        cursor = cursor->next;
    }

    begin1 = _cur;

    show_list(begin1);
}
