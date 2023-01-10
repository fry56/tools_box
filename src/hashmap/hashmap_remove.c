/*
** EPITECH PROJECT, 2023
** hashmap_remove.c
** File description:
** desc
*/

#include <t_hashmap.h>
#include <stdlib.h>

void remove_node_with_child(t_hashmap *hashmap, t_hashmap_node *node
    , const char *key)
{
    t_list_node *child_node = node->childs_node->tail;

    hashmap->child_elements--;
    ((t_hashmap_node *)child_node->value)->childs_node = node->childs_node;
    ((t_hashmap_node *)child_node->value)->parent_node = NULL;
    hashmap->map[hashmap_get_hash(hashmap->size, key)]
        = ((t_hashmap_node *)child_node->value);
    tlist_remove(((t_hashmap_node *)child_node->value)->childs_node
        , child_node);
}

bool thashmap_remove(t_hashmap *hashmap, const char *key)
{
    t_hashmap_node *node = thashmap_get(hashmap, key);
    if (node == NULL)
        return false;
    if (node->parent_node) {
        tlist_remove(node->parent_node->childs_node
            , tlist_find(node->parent_node->childs_node, node));
        node->host->child_elements--;
        return true;
    }
    if (node->childs_node) {
        if (node->childs_node->length > 0) {
            remove_node_with_child(hashmap, node, key);
        } else {
            node->host->node_elements--;
            free(node->childs_node);
        }
        free(node);
        return true;
    }
    return false;
}