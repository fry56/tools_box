/*
** EPITECH PROJECT, 2022
** memcpy.c
** File description:
** desc
*/

#include <tctype.h>

void *tmemcpy(void *dest, const void *src, tsize_t size)
{
    const u8 *src_pointer = (u8 *)src;
    u8 *dest_pointer = (u8 *)dest;

    while (--size > 0)
        *dest_pointer++ = *src_pointer++;
    return dest;
}
