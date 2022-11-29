/*
** EPITECH PROJECT, 2022
** add.c
** File description:
** desc
*/

#include <t_ctype.h>
#include <t_map.h>
#include <t_mem.h>
#include <t_string.h>

void map_add_node(t_map *map, t_map_node *node)
{
    if (map == NULL || node == NULL)
        return;
    node->host = map;
    map->length++;
    if (map->tail == NULL) {
        map->head = node;
        map->tail = node;
        return;
    }
    node->next = NULL;
    map->tail->next = node;
    node->prev = map->tail;
    map->tail = node;
}

t_map_node *tmap_add(t_map *map, char *key, tsize_t *value)
{
    t_map_node *node;

    if(map == NULL || key == NULL)
        return NULL;
    if ((node = tcalloc(1, sizeof(t_map_node))) == NULL)
        return NULL;
    node->value = value;
    tstr_cpy(node->key, key);
    map_add_node(map, node);
    return node;
}
