##
## EPITECH PROJECT, 2018
## makekile
## File description:
## makefile printf
##

NAME	=	matchstick

SRC	=	src/creating_tab.c	\
		src/matchstick.c	\
		src/writting.c		\
		src/checking_tab.c	\
		src/ia.c		\
		src/my_put_nbr.c	\
		src/lines.c		\
		src/rand_nb.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -g3

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	clean fclean all
