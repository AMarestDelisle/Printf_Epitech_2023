/*
** EPITECH PROJECT, 2022
** my_put_nbr_unsigned_int.c
** File description:
** By Arthur M-D
*/

void my_putchar(char c);

int my_put_nbr_unsigned_int(unsigned int nb)
{
    int res = 0;

    if (nb >= 10) {
        my_put_nbr_unsigned_int(nb / 10);
        my_putchar(nb % 10 + '0');
        res++;
    } else if (nb < 10) {
        my_putchar(nb + '0');
        res++;
    }
    return res;
}
