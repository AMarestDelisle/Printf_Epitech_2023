/*
** EPITECH PROJECT, 2022
** pointers.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int adress_pointer(char c, va_list list)
{
    if (c == 'p') {
        my_putstr("0x");
        putnbr_base_long(va_arg(list, long unsigned int), "0123456789abcdef");
    }
    return 0;
}

int pointers(char c, va_list list, int *counter)
{
    int vj = 0;
    int *j = &vj;
    int *res = 0;

    if (c == 'n') {
        vj = *counter;
        res = va_arg(list, int *);
        *res = *j;
    }
    adress_pointer(c, list);
    return *counter;
}
