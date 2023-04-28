/*
** EPITECH PROJECT, 2022
** compare_and_put_zero.c
** File description:
** By Arthur M-D
*/
#include "my_printf.h"

int put_zero(int number)
{
    while (number != 0) {
        my_putchar('0');
        number--;
    }
    return 0;
}

int put_spaces(int number)
{
    while (number != 0) {
        my_putchar(' ');
        number--;
    }
    return 0;
}

int compare(int number, int length)
{
    if (number > length) {
        number -= length;
        put_spaces(number);
    }
    if (number * -1 > length) {
        number += length;
        put_zero(number * -1);
    }
    return 0;
}
