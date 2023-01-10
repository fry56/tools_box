/*
** EPITECH PROJECT, 2022
** str_to_tlist.c
** File description:
** desc
*/

#include <t_list.h>
#include <stdlib.h>
#include <t_mem.h>
#include <t_string.h>

bool is_char_split(char c, char *split)
{
    if (c == '\0')
        return true;
    for (int i = 0; split[i] != '\0'; i++){
        if (split[i] == c)
            return true;
    }
    return false;
}

t_list *tstr_split(char *buf, char *split)
{
    t_list *new_list = tlist_new();
    int str_size = 0;
    char *temp;
    int buf_len = tstr_len((unsigned char *)buf);
    for (int i = 0; buf_len >= i; ++i) {
        if (is_char_split(buf[i], split) || buf_len == i) {
            temp[str_size] = '\0';
            tlist_add(new_list, temp);
            str_size = 0;
            continue;
        }
        if (str_size == 0)
            temp = malloc(2);
        else
            temp = trealloc(temp, str_size + 1, str_size + 2);
        temp[str_size] = buf[i];
        str_size++;
    }
    return new_list;
}
