/*
** EPITECH PROJECT, 2019
** rand
** File description:
** rand
*/

#include "../include/header.h"

int    rand_nb(int a)
{
    return (rand()%((a + 1) - 1) + 1);
}

int    aloura(struct a *c, int a, int b, int e)
{
    int x = 0;
    int p = 0;
    int g = e + e + 1;

    while (x <= g) {
        if (c->tab[a][x] == '|')
            p++;
        x++;
    }
    return (p);
}

int    rand_line(struct a *c, int a, int b, int e)
{
    int f = 0;
    int d = aloura(c, a, b, e);

    if (d >= b)
        f = b;
    if (d < b)
        f = d;
    return (rand()%((f + 1) - 1) + 1);
}

int    my_getnbr(char const *str)
{
    int neg = 0;
    int a = 0;
    int compteur = 0;

    if (str[0] == '\0')
        return (-1000);
    while (str[compteur] != '\0') {
        if (str[compteur] == '-') {
            neg++;
        }
        if  (str[compteur] >= 48 && str[compteur] <= 57) {
            a = (str[compteur] - 48) + a * 10;
        }
        compteur++;
    }
    if (neg % 2 == 1) {
        a = a * -1;
    }
    return (a);
}
