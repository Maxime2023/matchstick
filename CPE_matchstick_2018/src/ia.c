/*
** EPITECH PROJECT, 2019
** ia
** File description:
** ia
*/

#include "../include/header.h"

void    printing_ia(struct a *c, char *a, char *b)
{
    int x = my_getnbr(a) + my_getnbr(a) + 1;

    if (checking_line(c, c->second, my_getnbr(a)) != 0) {
        c->first = rand_line(c, c->second, my_getnbr(b), my_getnbr(a));
        my_putstr("AI's turn...\n");
        my_putstr("AI removed ");
        my_put_nbr(c->first);
        my_putstr(" match(es) from line ");
        my_put_nbr(c->second);
        my_putchar('\n');
    }
    if (checking_tab(c, a) != 0) {
        while (c->tab[c->second][x] != '|')
            x--;
        for (int save = 0; save < c->first; save++) {
            c->tab[c->second][x] = ' ';
            x--;
        }
    }
}

void    ia(struct a *c, char *a, char *b)
{
    int x = my_getnbr(a) + my_getnbr(a) + 1;

    c->first = 0;
    c->second = 0;
    if (checking_tab(c, a) != 0) {
        while (checking_line(c, c->second, my_getnbr(a)) == 0 &&
               checking_tab(c, a) != 0) {
            c->second = rand_nb(my_getnbr(a));
        }
        printing_ia(c, a, b);
        printing(c, a);
    }
}
