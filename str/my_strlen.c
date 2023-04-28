/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** By Arthur M-D
*/
int my_strlen(char const *str)
{
    int i = 0;
    int counter = 0;

    while (str[i] != '\0') {
        i++;
        counter++;
    }
    return counter;
}

int my_strlen_unsigned_int(char const *str)
{
    int i = 0;
    unsigned int counter = 0;

    while (str[i] != '\0') {
        i++;
        counter++;
    }
    return counter;
}
