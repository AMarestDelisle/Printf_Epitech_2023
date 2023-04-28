/*
** EPITECH PROJECT, 2022
** my_printf_for_float.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int float_value_caps_g(char c, va_list list, int *counter, int number)
{
    float tmp = 0;
    int res = 0;
    int length = 0;

    if (c == 'G') {
        tmp = va_arg(list, double);
        length = 6;
        compare(number, length);
        res = choice(tmp, c);
        *counter += res;
    }
    put_oct(c, list, counter, number);
    return 0;
}

int float_value_g(char c, va_list list, int *counter, int number)
{
    float tmp = 0;
    int res = 0;
    int length = 0;

    if (c == 'g') {
        tmp = va_arg(list, double);
        length = 6;
        compare(number, length);
        res = choice(tmp, c);
        *counter += res;
    }
    float_value_caps_g(c, list, counter, number);
    return 0;
}

int float_value_caps_e(char c, va_list list, int *counter, int number)
{
    int res = 0;
    float tmp = 0;
    int length = 0;

    if (c == 'e') {
        tmp = va_arg(list, double);
        length = 6;
        compare(number, length);
        res = my_put_float_exposant(tmp, c);
        (*counter) += res;
    }
    float_value_g(c, list, counter, number);
    return 0;
}

int float_value_e(char c, va_list list, int *counter, int number)
{
    int res = 0;
    float tmp = 0;
    int length = 0;

    if (c == 'e') {
        tmp = va_arg(list, double);
        length = 6;
        compare(number, length);
        res = my_put_float_exposant(tmp, c);
        (*counter) += res;
    }
    float_value_caps_e(c, list, counter, number);
    return 0;
}

int float_value_f(char c, va_list list, int *counter, int number)
{
    int res = 0;
    float tmp = 0;
    int length = 0;
    int precision = 6;

    if (c == 'f') {
        tmp = va_arg(list, double);
        length = length_float(tmp, precision);
        compare(number, length);
        res = my_put_float(tmp);
        (*counter) += res;
    }
    float_value_e(c, list, counter, number);
    return 0;
}
