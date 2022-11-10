/*
** EPITECH PROJECT, 2022
** free_table_dd.c
** File description:
** desc
*/

#include <stdlib.h>
#include "../includes/tctype.h"

void free_table_dd(void **ptr, int len, bool free_seg)
{
    if (len < 0) {
        while (*ptr) {
            free(*ptr);
            *ptr++ = NULL;
        }
    } else {
        while (len) {
            free(ptr[len]);
            ptr[len--] = NULL;
        }
    }
    if (free_seg) free(ptr);
}
