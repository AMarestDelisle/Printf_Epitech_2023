/*
** EPITECH PROJECT, 2022
** mini_printf_part2.c
** File description:
** By Arthur M-D
*/

#include "my_printf.h"

int put_hexadecimal_max(char c, va_list list, int *counter, int number)
{
    unsigned int buffer = 0;
    int res = 0;
    int length = 0;

    if (c == 'X') {
        buffer = va_arg(list,unsigned int);
        length = length_base(buffer, "0123456789ABCDEF");
        compare(number, length);
        res = put_hexa_caps(buffer);
        (*counter) += res;
    }
    return 0;
}

int put_hexadecimal_min(char c, va_list list, int *counter, int number)
{
    unsigned int buffer = 0;
    int res = 0;
    int length = 0;

    if (c == 'x') {
        buffer = va_arg(list, unsigned int);
        length = length_base(buffer, "0123456789abcdef");
        compare(number, length);
        res = put_hexa(buffer);
        (*counter) += res;
    }
    put_hexadecimal_max(c, list, counter, number);
    return 0;
}

int put_bin(char c, va_list list, int *counter, int number)
{
    int res = 0;
    unsigned int buffer = 0;
    int length = 0;

    if (c == 'b') {
        buffer = va_arg(list, unsigned int);
        length = length_base(buffer, "01");
        compare(number, length);
        res = put_binary(buffer);
        (*counter) += res;
    }
    put_hexadecimal_min(c, list, counter, number);
    return 0;
}

int put_oct(char c, va_list list, int *counter, int number)
{
    unsigned int buffer = 0;
    int res = 0;
    int length = 0;

    if (c == 'o') {
        buffer = va_arg(list, unsigned int);
        length = length_base(buffer, "01234567");
        compare(number, length);
        res = put_octal_unsigned(buffer);
        (*counter) += res;
    }
    put_bin(c, list, counter, number);
    return 0;
}
