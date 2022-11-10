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

Test (tprintf, f_float_simple, .init = redirect_all_std)
{
    tprintf("%f\n", 12.3);
    cr_assert_stdout_eq_str("12.3\n");
}

Test (tprintf, f_float_multiple, .init = redirect_all_std)
{
    tprintf("%f %f %f\n", 12.30, 45.67, 891011.12);
    cr_assert_stdout_eq_str("12.30 45.67 891011.12\n");
}

Test (tprintf, f_float_big, .init = redirect_all_std)
{
    tprintf("%f\n", 2545645.215454);
    cr_assert_stdout_eq_str("2545645.215454\n");
}
