/*
** EPITECH PROJECT, 2022
** t_list.h
** File description:
** desc
*/
#ifndef t_list_h
    #define t_list_h

    #include "t_ctype.h"

    typedef struct list_node {
        void *host;
        void *value;
        struct list_node *next;
        struct list_node *prev;
    } t_list_node;

    typedef struct map {
        t_list_node *head;
        t_list_node *tail;
        tsize_t length;
    } t_list;

    #define list_foreach(map, node) \
            for (t_list_node *node = map->head; node; node = node->next)

    t_list *tmap_new(void);
    t_list_node *tlist_get(t_list *list, tsize_t index);
    t_list_node *tlist_add(t_list *list, char *key, void *value);
    bool tlist_remove(t_list *list, t_list_node *node);
#endif //t_list
