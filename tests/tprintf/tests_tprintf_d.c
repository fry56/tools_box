/*
** EPITECH PROJECT, 2022
** tests_tprintf_f.c
** File description:
** desc
*/

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

Test (tprintf, d_int_simple, .init = redirect_all_std)
{
    tprintf("%d\n", 12);
    cr_assert_stdout_eq_str("12\n");
}

Test (tprintf, d_int_multiple, .init = redirect_all_std)
{
    tprintf("%d %d %d\n", 12, 45, 891011);
    cr_assert_stdout_eq_str("12 45 891011\n");
}

Test (tprintf, d_int_big, .init = redirect_all_std)
{
    tprintf("%d\n", 2545645);
    cr_assert_stdout_eq_str("2545645\n");
}
