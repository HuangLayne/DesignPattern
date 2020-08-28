#include <stdio.h>

#include "list.h"
#include "mem.h"

void print_list(List *list) {
    ListIterator *it = list_iterator_new(list, LIST_HEAD);
    ListNode *node;

    while ((node = list_iterator_next(it))) {
        printf("%lld ", node->val);
    }
    printf("\n");
    list_iterator_destroy(it);
}

int main() {
    List *list = list_create();
    list_push_back(list, list_node_new(0));
    list_push_back(list, list_node_new(1));
    list_push_back(list, list_node_new(2));
    list_push_back(list, list_node_new(3));
    list_push_back(list, list_node_new(4));
    print_list(list);

    list_insert(list, list_node_new(10), 4);
    print_list(list);

    list_push_front(list, list_node_new(5));
    print_list(list);

    ListNode *node = list_pop_back(list);
    free(node);
    print_list(list);

    node = list_pop_front(list);
    free(node);
    print_list(list);

    list_clear(list);
    print_list(list);

    list_destroy(list);
    return 0;
}
