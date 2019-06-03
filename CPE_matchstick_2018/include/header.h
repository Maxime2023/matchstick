/*
** EPITECH PROJECT, 2019
** header
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct a
{
    char **tab;
    char *buf;
    int first;
    int second;
    char *buffer;
    char *buffer_two;
    size_t bufsize;
    size_t bufsize_two;
}c;

void    creating_tab(struct a *c, char *e, char *u);
int    my_getnbr(char const *str);
void    my_putchar(char c);
int    my_strlen(char *str);
int    my_putstr(char *str);
int    wrong_conditions(int ac, char **av);
int    checking_tab(struct a *c, char *a);
char    *my_strcpy(char *dest, char *src);
int    checking_line(struct a *c, int a, int b);
int    my_put_nbr(int a);
int    printing(struct a *c, char *a);
void    ia(struct a *c, char *a, char *b);
int    rand_nb(int a);
int    aloura(struct a* c, int a, int b, int e);
int    rand_line(struct a *c, int a, int b, int e);
int    my_getnbr(char const *str);
void    error_one(char *a, char *b, struct a *c, int error);
int    matchstick(char *a, char *b, struct a *c, int error);
int    choose_line(char *a, char *b, struct a *c, int error);
int    choose_stick(char *a, char *b, struct a *c, int error);
int  	printing_tab_player(char *a, struct a *c);
int    rand_nb(int a);
int    aloura(struct a *c, int a, int b, int e);
int    rand_line(struct a *c, int a, int b, int e);
int    my_getnbr(char const *str);
