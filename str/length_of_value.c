/*
** EPITECH PROJECT, 2022
** length_of_value.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int length_int(int nbr)
{
    int res = 0;

    if (nbr < 0)
        nbr *= -1;
    if (nbr == 0)
        res++;
    while (nbr > 0) {
        res++;
        nbr /= 10;
    }
    return res;
}

int length_unsigned(unsigned int nbr)
{
    int res = 0;

    while (nbr > 0) {
        res++;
        nbr /= 10;
    }
    return res;
}

int length_float(float f, int precision)
{
    int res = 0;

    while (f > 0) {
        res++;
        f /= 10;
    }
    res = res + precision;
    return res;
}

unsigned int length_base(unsigned int nbr, char *base)
{
    unsigned int res = 0;

    while (nbr > my_strlen_unsigned_int(base)) {
        res++;
        nbr /= my_strlen_unsigned_int(base);
    }
    return res;
}
