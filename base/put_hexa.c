/*
** EPITECH PROJECT, 2022
** put_hexa
** File description:
** lukas anne
*/
int my_putnbr_base(int nbr, char const *base);

int put_hexa(int nbr)
{
    int res = 0;
    char const *base = "0123456789abcdef";

    my_putnbr_base(nbr, base);
    return res;
}
