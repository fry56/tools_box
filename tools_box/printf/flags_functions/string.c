/*
** EPITECH PROJECT, 2022
** string.c
** File description:
** desc
*/

#include "../include/tprintf.h"
#include "../include/twrite.h"
#include <stdarg.h>

void string_flag(va_list args)
{
    char *arg_string = va_arg(args, char*);
    twrite(1, arg_string);
}
