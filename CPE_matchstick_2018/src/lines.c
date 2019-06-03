/*
** EPITECH PROJECT, 2019
** lines
** File description:
** lines
*/

#include "../include/header.h"

int    pt(char *str)
{
    int d = 0;

    while (str[d] != '\0') {
        write(1, &str[d], 1);
        d++;
    }
}

int    choose_line(char *a, char *b, struct a *c, int error)
{
    int nb_line = 0;

    c->buffer = malloc(sizeof(char) * my_getnbr(a) + 1);
    c->bufsize = 2;
    if (getline(&c->buffer, &c->bufsize, stdin) == -1)
        return (2);
    if (c->buffer[0] == '\0')
        return (2);
    else {
        nb_line = my_getnbr(c->buffer);
        if (nb_line == -1000)
            return (2);
        if (nb_line == 0) {
            pt("Error this line is out of range\nLine: ");
            nb_line = choose_line(a, b, c, 1);
        }
        if (nb_line > my_getnbr(a)) {
            nb_line = choose_line(a, b, c, 1);
        }
        if (nb_line < 0) {
            pt("Error: invalid input (positive number expected)\nLine: ");
            nb_line = choose_line(a, b, c, 1);
        }
    }
}

int    choose_stick(char *a, char *b, struct a *c, int error)
{
    int nb_stick = 0;

    c->buffer_two = malloc(sizeof(char) * my_getnbr(a) + 1);
    c->bufsize_two = 2;
    if (getline(&c->buffer_two, &c->bufsize_two, stdin) == -1)
        return (2);
    if (c->buffer[0] == '\0')
        return (2);
    else {
        if (*c->buffer_two == '\0')
            return (2);
        nb_stick = my_getnbr(c->buffer_two);
        if (nb_stick == 0) {
            pt("Error you have to remove at least one match\nLine: ");
            nb_stick = choose_stick(a, b, c, 1);
        }
        if (nb_stick > my_getnbr(b)) {
            pt("Error: you cannot remove more than ");
            my_putstr(b);
            pt(" matches per turn\nLine: ");
            nb_stick = choose_stick(a, b, c, 1);
        }
        if (checking_line(c, my_getnbr(c->buffer), my_getnbr(a))
            < nb_stick) {
            pt("Error: not enough matches on this line\nLine: ");
            matchstick(a, b, c, 1);
        }
        if (nb_stick < 0) {
            pt("Error: invalid input (positive number expected)\nLine: ");
            nb_stick = choose_stick(a, b, c, 1);
        }
        else
            return (0);
    }
}

int    printing_tab_player(char *a, struct a *c)
{
    int f = 0;
    int e = 0;
    int y = my_getnbr(a);
    int x = y + y;
    int save = 0;

    c->buf = malloc(sizeof(char) * my_getnbr(a) + 1);
    if (checking_tab(c, a) != 0) {
        my_putstr("Player removed ");
        c->buf = my_strcpy(c->buf, c->buffer_two);
        my_putstr(c->buf);
        my_putstr(" match(es) from line ");
        my_putstr(c->buffer);
        e = my_getnbr(c->buffer);
        f = my_getnbr(c->buffer_two);
        while (c->tab[e][x] != '|')
            x--;
        while (save < f) {
            c->tab[e][x] = ' ';
            save++;
            x--;
        }
    }
    else
        return (0);
    return (1);
}
