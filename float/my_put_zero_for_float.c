/*
** EPITECH PROJECT, 2022
** my_put_zero_for_float.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

void put_zero_for_float_two(int i)
{
    if (i < 1000 && i >= 100) {
        my_putstr("000");
    } else if (i < 10000 && i >= 1000) {
        my_putstr("00");
    } else
        my_putchar('0');
}

void put_zero_for_float(int i)
{
    if (i < 10) {
        my_putstr("00000");
    } else if (i < 100 && i >= 10) {
        my_putstr("0000");
    } else
        put_zero_for_float_two(i);
}
