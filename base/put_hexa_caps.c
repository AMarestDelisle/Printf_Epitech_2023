/*
** EPITECH PROJECT, 2022
** put_hexa_caps
** File description:
** lukas anne
*/
int my_putnbr_base(int nbr, char const *base);

int put_hexa_caps(unsigned int nbr)
{
    int res = 0;
    char const *base = "0123456789ABCDEF";

    my_putnbr_base(nbr, base);
    return res;
}
