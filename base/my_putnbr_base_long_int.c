/*
** EPITECH PROJECT, 2022
** my_putnbr_base.c
** File description:
** By Arthur M-D
*/
#include "my_printf.h"

int putnbr_base_long(long unsigned int nbr, const char *base)
{
    long unsigned int res = 0;
    long unsigned int i = my_strlen(base);

    if (nbr >= i) {
        putnbr_base_long(nbr / i, base);
        my_putchar(base[nbr % i]);
        res++;
    } else if (nbr < i) {
        my_putchar(base[nbr % i]);
        res++;
    }
    return res;
}
