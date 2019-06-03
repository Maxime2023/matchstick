/*
** EPITECH PROJECT, 2019
** writting
** File description:
** writting
*/

#include "../include/header.h"

void    my_putchar(char c)
{
    write (1, &c, 1);
}

int    my_putstr(char *str)
{
    int d = 0;

    while (str[d] != '\0') {
        my_putchar(str[d]);
        d++;
    }
}

int    my_strlen(char *str)
{
    int	d = 0;

    while (str[d] != '\0')
        d++;
    return (d);
}

int    wrong_conditions(int ac, char **av)
{
    if (ac != 3)
        return (1);
    else if (my_getnbr(av[1]) >= 100)
        return (1);
    return (0);
}

char    *my_strcpy(char *dest, char *src)
{
    int a = 0;
    int b = my_strlen(src);

    while (a < b - 1) {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return (dest);
}
