/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** Task07
*/

#include "../include/header.h"

int    puissance(int a)
{
    int c = 10;
    int d = 0;
    int exp = 1;

    while (d < a - 1) {
        exp = exp * 10;
        d++;
    }
    return (exp);
}

int    lengh_nb(int nb)
{
    int a = 0;

    if (nb < 0)
        nb = nb * (-1);
    while (nb > 0) {
        nb = nb / 10;
        a++;
    }
    return (a);
}

int    negativity(int nb, int a)
{
    int b = 1;
    int c = 0;
    int d = 0;

    my_putchar('-');
    nb = nb * (-1);
    while (a > 0) {
        c = nb / puissance(a);
        d = c % 10;
        my_putchar(d + 48);
        a--;
        b++;
    }
}

int   adding_condition(int nb)
{
    int a = lengh_nb(nb);
    int b = 1;
    int c = 0;
    int d = 0;

    if (nb > 9) {
        while (a > 0) {
            c = nb / puissance(a);
            d = c % 10;
            my_putchar(d + 48);
            a--;
            b++;
        }
    }
    return (0);
}

int    my_put_nbr(int nb)
{
    int a = lengh_nb(nb);
    int b = 1;
    int c = 0;
    int d = 0;

    if (nb < 0) {
        if (nb < -9)
        negativity(nb, a);
        else if (nb >= -9) {
            nb = nb * (-1);
            my_putchar('-');
            my_putchar(nb + 48);
        }
    }
    else if (nb >= 0 && nb <= 9){
        my_putchar(nb + 48);
    }
    adding_condition(nb);
    return (0);
}
