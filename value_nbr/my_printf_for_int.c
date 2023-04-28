/*
** EPITECH PROJECT, 2022
** my_printf_for_int.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int integer_i(char c, va_list list, int *counter, int number)
{
    int length = 0;
    int tmp = 0;

    if (c == 'i') {
        tmp = va_arg(list, int);
        length = length_int(tmp);
        compare(number, length);
        (*counter) += my_put_nbr(tmp);
    }
    float_value_f(c, list, counter, number);
    return 0;
}

int integer_d(char c, va_list list, int *counter, int number)
{
    int length = 0;
    int tmp = 0;

    if (c == 'd') {
        tmp = va_arg(list, int);
        length = length_int(tmp);
        compare(number, length);
        (*counter) += my_put_nbr(tmp);
    }
    integer_i(c, list, counter, number);
    return 0;
}

int unsigned_value(char c, va_list list, int *counter, int number)
{
    int length = 0;
    unsigned int buffer = 0;

    if (c == 'u') {
        buffer = va_arg(list, unsigned int);
        length = length_unsigned(buffer);
        compare(number, length);
        (*counter) += my_put_nbr_unsigned_int(buffer);
    }
    integer_d(c, list, counter, number);
    return 0;
}
