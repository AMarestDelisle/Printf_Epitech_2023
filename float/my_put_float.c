/*
** EPITECH PROJECT, 2022
** my_put_float.c
** File description:
** By Arthur M-D
*/
#include "my_printf.h"

int my_put_float(float nb)
{
    int i = nb;
    int res = 0;

    res = my_put_nbr(i);
    nb = nb - (float)i;
    my_putchar('.');
    nb = nb * 1000000;
        if (nb > 0.5) {
            nb += 0.4;
        }
        i = nb;
        put_zero_for_float(i);
        nb = nb - i;
        res += my_put_nbr(i);
    return res;
}

int exposants(int exposant)
{
    if (exposant >= 0)
        my_putchar('+');
    if (exposant < 0) {
        my_putchar('-');
        exposant *= -1;
    }
    if (exposant < 10)
        my_putchar('0');
    return exposant;
}

int my_put_float_exposant_part2(float nb, char c, int exposant)
{
    int i = nb;

    i = nb;
    my_put_nbr(i);
    my_putchar('.');
    nb *= 1000000;
    i = nb;
    my_put_nbr(i);
    my_putchar(c);
    exposant = exposants(exposant);
    my_put_nbr(exposant);
    return 12;
}

int my_put_float_exposant(float nb, char c)
{
    int res = 0;
    int exposant = 0;

    while (nb > 9) {
        nb /= 10;
        exposant += 1;
    }
    while (nb < 1) {
        nb = nb * 10;
        exposant -= 1;
    }
    res = my_put_float_exposant_part2(nb, c, exposant);
    return res;
}

int choice(float nb, char c)
{
    int res = 0;

    if (nb > 999999.5 || nb < 0.999995) {
        if (c == 'g')
            res = my_put_float_exposant(nb, 'e');
        if (c == 'G')
            res = my_put_float_exposant(nb, 'E');
    } else
        res = my_put_float(nb);
    return res;
}
