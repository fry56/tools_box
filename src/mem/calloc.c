/*
** EPITECH PROJECT, 2022
** calloc.c
** File description:
** desc
*/

#include <tctype.h>
#include <tmem.h>

void *tcalloc(tsize_t tmem, tsize_t size)
{
    void *pointer = malloc(size * tmem);

    if (pointer != NULL)
        tmemset(pointer, 0, size * tmem);
    return pointer;
}
