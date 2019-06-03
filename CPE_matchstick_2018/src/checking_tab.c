/*
** EPITECH PROJECT, 2019
** check
** File description:
** check
*/

#include "../include/header.h"

int    checking_tab(struct a *c, char *a)
{
    int d = my_getnbr(a);
    int e = 0;
    int x = 0;
    int y = 0;

    while (y <= d) {
        x = 0;
        while (x < (d + d + 1)) {
            if (c->tab[y][x] == '|')
                e++;
            x++;
        }
        y++;
    }
    if (e > 0)
        return (1);
    return (0);
}

int    checking_line(struct a *c, int a, int b)
{
    int x = 0;
    int d = 0;

    while (x <= b + b + 1) {
        if (c->tab[a][x] == '|')
            d++;
        x++;
    }
    return (d);
}

int    printing(struct a *c, char *a)
{
    for (int e = 0; e < my_getnbr(a) + 2; e++) {
        my_putstr(c->tab[e]);
        my_putchar('\n');
    }
}
