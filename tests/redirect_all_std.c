/*
** EPITECH PROJECT, 2022
** redirect_all_std.c
** File description:
** desc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
