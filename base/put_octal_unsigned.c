/*
** EPITECH PROJECT, 2022
** put_octal_unsigned
** File description:
** lukas anne
*/
int my_putchar(char c);
int my_putnbr_base(int nbr, char const *base);

int put_octal_unsigned(unsigned int nbr)
{
    int res = 0;
    char const *base = "01234567";

    res = my_putnbr_base(nbr, base);
    return res;
}
