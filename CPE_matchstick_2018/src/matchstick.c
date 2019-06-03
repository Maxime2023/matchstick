/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** matchstick
*/

#include "../include/header.h"

void    writting_error(int error)
{
    if (error == 0) {
        my_putstr("\nYour turn:\n");
        my_putstr("Line: ");
    }
}

void    filled_tab(struct a *c, char *a, char *b)
{
    int len = my_getnbr(a);
    int d = 1;
    int e = (len + len - 1);
    int g = 1;

    creating_tab(c, a, b);
    while (len >= 1) {
        d = g;
        while (d <= e) {
            c->tab[len][d] = '|';
            d++;
        }
        len--;
        g++;
        e--;
    }
    printing(c, a);
}

int    matchstick(char *a, char *b, struct a *c, int error)
{
    writting_error(error);
    if (choose_line(a, b, c, error) == 2)
        return (4);
    my_putstr("Matches: ");
    if (choose_stick(a, b, c, error) == 2)
        return (4);
    if (c->buffer[0] != '\0' && c->buffer_two[0] != '\0') {
        if (printing_tab_player(a, c) == 0)
            return (1);

        if (checking_tab(c, a) == 0) {
            printing(c, a);
            return (2);
        }
        printing(c, a);
        my_putchar('\n');
        ia(c, a, b);
        if (checking_tab(c, a) == 0) {
            return (1);
        }
        error = 0;
        if (checking_tab(c, a) != 0) {
            matchstick(a, b, c, 0);
        }
    }
}

int    lastprint(char *a, char *b, struct a *c, int error)
{
    int win = matchstick(a, b, c, error);

    if (win == 1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    if (win == 2) {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    if (win == 4)
        return (4);
}

int    main(int ac, char **av)
{
    int a = 0;
    struct a *c = malloc(sizeof(struct a));
    if (wrong_conditions(ac, av) == 1)
        return (0);
    filled_tab(c, av[1], av[2]);
    a = lastprint(av[1], av[2], c, 0);
    if (a == 1)
        return (1);
    else if (a == 2)
        return (2);
    else
        return (0);
}
