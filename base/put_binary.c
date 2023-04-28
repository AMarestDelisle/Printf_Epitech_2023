/*
** EPITECH PROJECT, 2022
** put_binary
** File description:
** lukas anne
*/
int my_putnbr_base(int nbr, char const *base);

int put_binary(unsigned int nbr)
{
    int res = 0;
    char const *base = "01";

    res = my_putnbr_base(nbr, base);
    return res;
}
