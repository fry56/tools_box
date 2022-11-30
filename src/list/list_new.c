/*
** EPITECH PROJECT, 2022
** map_new.c
** File description:
** desc
*/

#include <t_list.h>
#include <stdlib.h>
#include <t_mem.h>

t_list *tmap_new(void)
{
    t_list *new_list = tcalloc(1, sizeof(t_list));

    return new_list;
}
