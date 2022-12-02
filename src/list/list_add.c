/*
** EPITECH PROJECT, 2022
** add.c
** File description:
** desc
*/

#include <t_ctype.h>
#include <t_list.h>
#include <t_mem.h>
#include <t_string.h>

void list_add_node(t_list *list, t_list_node *node)
{
    if (list == NULL || node == NULL)
        return;
    node->host = list;
    list->length++;
    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
        return;
    }
    node->next = NULL;
    list->tail->next = node;
    node->prev = list->tail;
    list->tail = node;
}

t_list_node *tlist_add(t_list *list, void *value)
{
    t_list_node *node;

    if (list == NULL)
        return NULL;
    if ((node = tcalloc(1, sizeof(t_list_node))) == NULL)
        return NULL;
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    list_add_node(list, node);
    return node;
}
