/*
** EPITECH PROJECT, 2022
** char_lower.c
** File description:
** desc
*/

#include "../../include/tchar.h"

char char_lower(char c)
{
    if (!char_is_upper(c))
        return c;
    return (c + 32);
}
