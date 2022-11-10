/*
** EPITECH PROJECT, 2022
** test.c
** File description:
** desc
*/

#include "includes/ttable.c.h"
#include <stdlib.h>

int main(void)
{
    char **table = malloc(sizeof(char *) * 4);

    for (int i = 0; i < 3; i++) {
        table[i] = malloc(sizeof(char ) * 5);
    }

    free_table_dd((void **)table, 1, true);

    return 0;
}
