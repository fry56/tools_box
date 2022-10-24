/*
** EPITECH PROJECT, 2022
** str_is_printable.c
** File description:
** desc
*/

#include <tstring.h>

int tstr_is_printable(char const *str)
{
    int length = tstr_len(str);
    int count = 0;

    if (length == 0)
        return 1;
    while (str[count] != '\0') {
        if (!(str[count] > 32 && str[count] < 127))
            return 0;
        count++;
    }
    return 1;
}
