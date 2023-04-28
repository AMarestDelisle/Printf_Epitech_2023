/*
** EPITECH PROJECT, 2022
** my_putnbr_base.c
** File description:
** By Arthur M-D
*/
int my_strlen(char const *str);
void my_putchar(char c);

int my_putnbr_base(int nbr, char const *base)
{
    int res = 0;
    int i = my_strlen(base);

    if (nbr >= i) {
        my_putnbr_base(nbr / i, base);
        my_putchar(base[nbr % i]);
        res++;
    } else if (nbr < i) {
        my_putchar(base[nbr % i]);
        res++;
    }
    return res;
}
