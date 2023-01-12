/*
** EPITECH PROJECT, 2022
** str_cpy.c
** File description:
** desc
*/

#include <t_string.h>

char *tstr_cpy(char *dest, char const *src)
{
    int i;
    int length_src = tstr_len((unsigned char *)src);

    if (dest == NULL)
        dest = malloc(length_src + 2);
    for (i = 0; i <= length_src; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char *tstr_ncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i <= n; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
