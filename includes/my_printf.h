/*
** EPITECH PROJECT, 2022
** my_printf.h
** File description:
** By Arthur M-D
*/

#include <stdarg.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    void my_putchar(char c);
    void put_zero_for_float(int i);
    int my_putnbr_base(int nbr, char const *base);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_put_nbr_unsigned_int(unsigned long int nb);
    int unsigned_value(char c, va_list list, int *counter, int number);
    int integer_i(char c, va_list list, int *counter, int number);
    int integer_d(char c, va_list list, int *counter, int number);
    int string(char c, va_list list, int *counter, int number);
    int number(va_list list, int *counter, const char *format, int *i);
    int my_printf_browse_sentence(const char *format, va_list list);
    int my_printf(const char *format, ...);
    int put_octal_unsigned(unsigned int nbr);
    int my_put_float(float nb);
    int put_binary(unsigned int nbr);
    int put_hexa(unsigned int nbr);
    int put_hexa_caps(unsigned int nbr);
    int my_put_float_exposant(float nb, char c);
    int choice(float nb, char c);
    int float_value_f(char c, va_list list, int *counter, int number);
    int float_value_e(char c, va_list list, int *counter, int number);
    int float_value_E(char c, va_list list, int *counter, int number);
    int float_value_g(char c, va_list list, int *counter, int number);
    int put_bin(char c, va_list list, int *counter, int number);
    int put_hexadecimal_min(char c, va_list list, int *counter, int number);
    int put_hexadecimal_max(char c, va_list list, int *counter, int number);
    int pointers(char c, va_list list, int *counter);
    int length_string(char *str);
    int length_int(int nbr);
    int length_unsigned(unsigned int nbr);
    int length_float(float f, int precision);
    unsigned int length_base(unsigned int nbr, char *base);
    int putnbr_base_long(long unsigned int nbr, char const *base);
    int percentage_find(const char *format, va_list list, int *i, int *counter);
    int float_value_caps_g(char c, va_list list, int *counter, int number);
    int put_oct(char c, va_list list, int *counter, int number);
    unsigned int my_strlen_unsigned_int(char const *str);
    int put_zero(int number);
    int put_spaces(int number);
    int compare(int number, int length);
#endif /* MY_PRINTF_H_ */
