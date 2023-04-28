/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int my_put_nbr(int nb)
{
    int counter = 0;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * -1);
        counter++;
        return counter;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
        counter++;
    } else if (nb < 10) {
        my_putchar(nb + '0');
        counter++;
    }
    return counter;
}
