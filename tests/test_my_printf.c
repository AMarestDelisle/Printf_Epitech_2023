/*
** EPITECH PROJECT, 2022
** test_miniprintf.c
** File description:
** By Arthur M-D
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

int my_printf(const char *format, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_string_with_enter, .init = redirect_all_std)
{
    my_printf("hello world\n");
    cr_assert_stdout_eq_str("hello world\n");
}

Test(my_printf, string_with_s, .init = redirect_all_std)
{
    char *str = "world";

    my_printf("hello %s\n", str); 
    cr_assert_stdout_eq_str("hello world\n");
}

Test(my_printf, string_with_i, .init = redirect_all_std)
{
    int i = 2000;

    my_printf("hello %i\n", i); 
    cr_assert_stdout_eq_str("hello 2000\n");
}

Test(my_printf, string_with_d, .init = redirect_all_std)
{
    int i = -2000;

    my_printf("hello %d\n", i); 
    cr_assert_stdout_eq_str("hello -2000\n");
}

Test(my_printf, string_with_c, .init = redirect_all_std)
{
    char c = 'W';

    my_printf("hello %c\n", c); 
    cr_assert_stdout_eq_str("hello W\n");
}

Test(my_printf, string_with_percente, .init = redirect_all_std)
{
    my_printf("hello %%\n"); 
    cr_assert_stdout_eq_str("hello %\n");
}

Test(my_printf, string_with_all, .init = redirect_all_std)
{
    int i = 24;
    char c = 'M';
    char *str = "world";
    int j = -54;

    my_printf("hello %s, %c = %i & %d le tout en %%\n", str, c, i, j); 
    cr_assert_stdout_eq_str("hello world, M = 24 & -54 le tout en %\n");
}

Test(my_printf, return_simple_string, .init = redirect_all_std)
{
    int result = 0;

    result = my_printf("hello world");
    cr_assert_eq(11, result);
}

Test(my_printf, return_number_character_of_string, .init = redirect_all_std)
{
    char chara = 'M';
    char *str = "Arthur ";
    int i = -90;
    int y = 2003;       
    int result = 0;

    result = my_printf("hello %s, %i%d%% %c", str, i, y, chara);
    cr_assert_eq(24, result);
}

Test(my_printf, return_value_chara_string_enter, .init = redirect_all_std)
{
    char chara = 'M';
    char *str = "Arthur ";
    int i = -90;
    int y = 2003;       
    int result = 0;

    result = my_printf("hello %s, %i%d%% %c\n", str, i, y, chara);
    cr_assert_eq(25, result);
}

Test(my_printf, return_value_of_empty_string, .init = redirect_all_std)
{
    int result = 0;

    result = my_printf("");
    cr_assert_eq(0, result);
}

Test(my_printf, string_with_u, .init = redirect_all_std)
{
    unsigned int i = 1000000000;

    my_printf("%u\n", i);
    cr_assert_stdout_eq_str("1000000000\n");
}

Test(my_printf, string_with_b, .init = redirect_all_std)
{
    int i = 42;

    my_printf("%b\n", i);
    cr_assert_stdout_eq_str("101010\n");
}

Test(my_printf, string_with_x, .init = redirect_all_std)
{
    int i = 42;

    my_printf("%x\n", i);
    cr_assert_stdout_eq_str("2a\n");
}

Test(my_printf, string_with_cap_x, .init = redirect_all_std)
{
    int i = 42;

    my_printf("%X\n", i);
    cr_assert_stdout_eq_str("2A\n");
}

Test(my_printf, string_with_o, .init = redirect_all_std)
{
    int i = 42;

    my_printf("%o\n", i);
    cr_assert_stdout_eq_str("52\n");
}

Test(my_printf, string_with_n, .init = redirect_all_std)
{
    int i = 0;

    my_printf("hello world%n\n", &i);
    my_printf("%i\n", i); 
    cr_assert_stdout_eq_str("hello world\n11\n");
}

Test(my_printf, string_with_f, .init = redirect_all_std)
{
    float f = 1.300;

    my_printf("%f\n", f);
    cr_assert_stdout_eq_str("1.300000\n");
}

Test(my_printf, string_with_cap_e, .init = redirect_all_std)
{
    float f = 1.300;

    my_printf("%E\n", f);
    cr_assert_stdout_eq_str("1.300000E+00\n");
}

Test(my_printf, string_with_e, .init = redirect_all_std)
{
    float f = 1.300;

    my_printf("%e\n", f);
    cr_assert_stdout_eq_str("1.300000e+00\n");
}

Test(my_printf, string_with_g, .init = redirect_all_std)
{
    float f = 1.300;

    my_printf("%g\n", f);
    cr_assert_stdout_eq_str("1.3\n");
}

Test(my_printf, string_with_p, .init = redirect_all_std)
{
    int p = 0;
    int *ap = &p;
    char str[327];

    my_printf("%p\n", ap);
    sprintf(str, "%p\n", ap);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, string_with_number, .init = redirect_all_std)
{
    int i = 1;
        
    my_printf("%5i\n", i);
    cr_assert_stdout_eq_str("    1\n");
}

Test(my_printf, string_with_number_with0, .init = redirect_all_std)
{
    int i = 0;
        
    my_printf("%5i\n", i);
    cr_assert_stdout_eq_str("    0\n");
}

Test(my_printf, string_with_number_and_zero, .init = redirect_all_std)
{
    int i = 1;
        
    my_printf("%05i\n", i);
    cr_assert_stdout_eq_str("00001\n");
}
