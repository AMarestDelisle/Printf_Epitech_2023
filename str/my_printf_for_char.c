/*
** EPITECH PROJECT, 2022
** my_printf_part1.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int character(char c, va_list list, int *counter, int number)
{
    if (c == 'c') {
        compare(number, 1);
        my_putchar(va_arg(list, int));
        (*counter)++;
    }
    if (c == '%') {
        compare(number, 1);
        my_putchar('%');
        (*counter)++;
    }
    unsigned_value(c, list, counter, number);
    return 0;
}

int string(char c, va_list list, int *counter, int number)
{
    char *buffer;
    int length = 0;

    if (c == 's') {
        buffer = va_arg(list, char *);
        length = my_strlen(buffer);
        compare(number, length);
        my_putstr(buffer);
        (*counter) += length;
    }
    character(c, list, counter, number);
    return 0;
}
