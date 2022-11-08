/*
** EPITECH PROJECT, 2022
** memset.c
** File description:
** desc
*/

#include "../../includes/tctype.h"

void *tmemset(void *dest, int value, tsize_t size)
{
    u8 *tmp = (u8 *)dest;

    while (size) {
        *tmp++ = value;
        size--;
    }
    return dest;
}
