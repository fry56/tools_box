/*
** EPITECH PROJECT, 2022
** my_int_len.c
** File description:
** desc
*/

#include "../../includes/tmath.h"

int int_len(int nbr)
{
    int length = 0;

    nbr = abs(nbr);
    while (nbr > 0) {
        length++;
        nbr /= 10;
    }
    return length;
}
