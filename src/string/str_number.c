/*
** EPITECH PROJECT, 2022
** str_number.c
** File description:
** desc
*/

#include <t_mem.h>
#include <t_math.h>

char *tstr_number(int number)
{
    int number_len = int_len(number);
    char *new_str = tcalloc(1, sizeof(number_len + 1));

    if (new_str == NULL)
        return NULL;
    for (int i = 0; i < number_len; i++) {
        new_str[i] = (char)(((int)number % int_power(10, number_len - i)
            / int_power(10, number_len - (i + 1))) + 48);
    }
    return new_str;
}
