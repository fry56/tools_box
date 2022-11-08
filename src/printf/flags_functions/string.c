/*
** EPITECH PROJECT, 2022
** string.c
** File description:
** desc
*/

#include "../../../includes/tprintf.h"
#include "../../../includes/twrite.h"
#include <stdarg.h>

void string_flag(va_list args)
{
    char *arg_string = va_arg(args, char*);
    twrite(1, arg_string);
}
