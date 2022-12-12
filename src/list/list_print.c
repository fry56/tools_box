/*
** EPITECH PROJECT, 2022
** list_print.c
** File description:
** desc
*/

#include <t_list.h>

void tlist_print(t_list *list)
{
    int i = 0;
    printf("\n\n\n");
    printf("--- List --- \n");
    printf("Pointer : %p \n", list);
    printf("Head : %p \n", list->head);
    printf("Tail : %p \n", list->tail);
    printf("Length : %lu \n", list->length);
    printf("--- Node --- \n");
    list_foreach(list, node) {
        printf("Node [%d] \n", i);
        printf("Pointer : %p \n", node);
        printf("Host : %p \n", node->host);
        printf("next : %p \n", node->next);
        printf("prev : %p \n", node->prev);
        printf("value : %p \n", node->value);
        printf("value(string) : %s \n", node->value);
        i++;
    }
}
