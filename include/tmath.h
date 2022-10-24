/*
** EPITECH PROJECT, 2022
** tmath.h
** File description:
** desc
*/
#ifndef TOOLS_BOX_TMATH_H
    #define TOOLS_BOX_TMATH_H

int int_is_prime(int nb);
int int_power(int nb, int p);
int int_square(int nb);
int my_find_prime_sup(int nb);
int int_get_nbr(char const *str);

#ifndef min
#define min(a, b) ((a < b) ? a : b)
#endif

#ifndef max
#define max(a, b) (a > b) ? a : b)
#endif

#ifndef abs
#define abs(val) ((val < 0) ? -val : val)
#endif

#endif //TOOLS_BOX_TMATH_H
