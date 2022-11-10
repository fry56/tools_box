/*
** EPITECH PROJECT, 2022
** tests_tprinf.c
** File description:
** desc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../../includes/tprintf.h"

void redirect_all_std(void);

Test (tprintf, c_char_simple, .init = redirect_all_std)
{
    tprintf("%c\n", 'f');
    cr_assert_stdout_eq_str("f\n");
}

Test (tprintf, c_char_multiple, .init = redirect_all_std)
{
    tprintf("%c %c %c\n", 'A', 'b', 'C');
    cr_assert_stdout_eq_str("A b c\n");
}

Test (tprintf, c_char_nbr, .init = redirect_all_std)
{
    tprintf("%c\n", 65);
    cr_assert_stdout_eq_str("A\n");
}
