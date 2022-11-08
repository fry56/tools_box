/*
** EPITECH PROJECT, 2022
** realloc.c
** File description:
** desc
*/

#include "../../includes/tctype.h"
#include "../../includes/tmem.h"

void *trealloc(void *tmem, tsize_t size, tsize_t new_size)
{
    void *tnewmem;

    if (!new_size) {
        free(tmem);
        return NULL;
    }
    if (tmem == NULL)
        return NULL;
    tnewmem = tcalloc(1, size);
    if (tnewmem == NULL)
        return NULL;
    tmemcpy(tnewmem, tmem, new_size);
    free(tmem);
    return tnewmem;
}
