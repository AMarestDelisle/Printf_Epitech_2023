/*
** EPITECH PROJECT, 2022
** mini_printf.c
** File description:
** By Arthur M-D
*/

#include <stdarg.h>
#include "my_printf.h"

int start_with_zero(const char *format, int *i)
{
    if (format[*i] == 48) {
        (*i)++;
        return -1;
    }
    return 1;
}

int before_number(va_list list, int *counter, const char *format, int *i)
{
    int k = 1;
    int j = 0;
    int number = 0;
    int sign = 1;

    sign = start_with_zero(format, i);
    if (format[*i] >= 49 && format[*i] <= 57) {
        while (format[*i] >= 48 && format[*i] <= 57) {
            j = format[*i] - 48;
            number *= k;
            number += j;
            k *= 10;
            (*i)++;
        }
        number *= sign;
        string(format[*i], list, counter, number);
    } else
        string(format[*i], list, counter, number);
    return 0;
}

int percentage_find(const char *format, va_list list, int *i, int *counter)
{
    if (format[*i] == '%') {
        (*i)++;
        pointers(format[*i], list, counter);
        before_number(list, counter, format, i);
    } else {
        my_putchar(format[(*i)]);
        (*counter)++;
    }
    return *counter;
}

int my_printf_browse_sentence(const char *format, va_list list)
{
    int i = 0;
    int counter = 0;

    for (i = 0; format[i] != '\0';i++)
        percentage_find(format,list, &i, &counter);
    return counter;
}

int my_printf(const char *format, ...)
{
    va_list list;
    int counter = 0;

    va_start(list, format);
    counter = my_printf_browse_sentence(format, list);
    va_end(list);
    return counter;
}
