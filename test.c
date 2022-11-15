/*
** EPITECH PROJECT, 2022
** test.c
** File description:
** desc
*/

#include "includes/ttable.h"
#include "includes/tmem.h"
#include "tprintf.h"
#include <stdlib.h>

int main(void)
{
    int *table = tcalloc(sizeof(int), 4);

    table[3] = 25;

    table = trealloc(table, sizeof(int) * 4, sizeof(int) * 6);

    table[4] = 0;
    table[5] = 50;

    for (int i = 0; i < 6; i++) {
        tprintf("VAlue : %d \n", table[i]);
    }

    return 0;
}
