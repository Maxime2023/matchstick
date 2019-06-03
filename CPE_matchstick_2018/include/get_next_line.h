/*
** EPITECH PROJECT, 2019
** gnl
** File description:
** gnl
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# ifndef READ_SIZE
#    define READ_SIZE (12)
# endif

char    *get_next_line(int fd);
