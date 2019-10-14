typedef struct linked_list_s {
    char *data;
    struct linked_list_s *next;
} *linked_list_t;

int count_list(linked_list_t head);