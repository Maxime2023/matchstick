/*
** EPITECH PROJECT, 2019
** tab
** File description:
** tab
*/

#include "../include/header.h"

void    malloc_tab(struct a *c, char * e, char *u)
{
    int a = 0;
    int len = my_getnbr(e);
    int max = my_getnbr(u);

    c->tab = malloc(sizeof(char *) * (len + 2));
    while (a < len + 2) {
        c->tab[a] = malloc(sizeof(char) * (len + len + 2));
        a++;
    }
}

void    creating_tab_one(struct a *c, char *e, char *u)
{
    int len = my_getnbr(e);
    int max = my_getnbr(u);
    int a = 0;
    int b = 0;
    int d = 0;

    malloc_tab(c, e, u);
    while (a < (len * 2 + 1)) {
        c->tab[0][a] = '*';
        a++;
    }
    c->tab[0][a] = '\0';
}

void    creating_tab_two(struct a *c, char *e, char *u)
{
    int len = my_getnbr(e);
    int max = my_getnbr(u);
    int a = 1;
    int b = 0;
    int d = 0;

    creating_tab_one(c, e, u);
    while (a <= my_getnbr(e)) {
        c->tab[a][0] = '*';
        b = 1;
        while (b != (my_getnbr(e) + my_getnbr(e))) {
            c->tab[a][b] = ' ';
            b++;
        }
        c->tab[a][b] = '*';
        c->tab[a][b + 1] = '\0';
        a++;
    }
}

void    creating_tab(struct a *c, char *e, char *u)
{
    int len = my_getnbr(e);
    int max = my_getnbr(u);
    int a = 0;
    int b = 0;

    creating_tab_two(c, e, u);
    while (a < (my_getnbr(e) * 2 + 1)) {
        c->tab[my_getnbr(e) + 1][a] = '*';
        a++;
    }
    c->tab[my_getnbr(e) + 1][a] = '\0';
}
