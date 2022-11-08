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
    int int_find_prime_sup(int nb);
    int int_len(int nbr);
    double double_modulo(long double nb, double div);
    int double_len(long double nb, int precision);
    long double double_abs(long double nb);

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
