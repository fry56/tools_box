/*
** EPITECH PROJECT, 2022
** char_is_upper.c
** File description:
** desc
*/

#include "../../includes/tctype.h"

bool char_is_upper(char c)
{
    if (!(c > 'A' && c < 'Z'))
        return false;
    return true;
}