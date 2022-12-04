/*
** EPITECH PROJECT, 2022
** str_concat.c
** File description:
** desc
*/

#include <t_mem.h>
#include <t_string.h>

char *tstr_concat(char *str_a, char *str_b)
{
    int len_a = tstr_len(str_a);
    int len_b = tstr_len(str_b);
    char *new_str = tcalloc(1, sizeof(len_a + len_b + 1));

    if (new_str == NULL)
        return NULL;
    for (int i = 0; i < len_a + len_b; ++i) {
        if (i < len_a)
            new_str[i] = str_a[i];
        else
            new_str[i] = str_b[i - len_a];
    }
    return new_str;
}
