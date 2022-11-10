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

Test (tprintf, multiple_simple, .init = redirect_all_std)
{
    tprintf("%s %d %f %c %%\n", "Hello world", 12, 2.34, 'A');
    cr_assert_stdout_eq_str("Hello world 12 2.34 A\n");
}

Test (tprintf, multiple_big, .init = redirect_all_std)
{
    tprintf("%%%%%%s\n", "Hello this is a test for my equivalent mini pritf/printf");
    cr_assert_stdout_eq_str("%%%\n");
}
