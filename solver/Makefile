##
## EPITECH PROJECT, 2023
## Project make by Clément Barrier and Axel Averly
## File description:
## Makefile
##

SRC = 	src/main.c \
		src/my_solver.c \
		src/count.c \
		src/pre_tests/help.c \
		src/pre_tests/handle_error_maze.c \
		src/pre_tests/prerequisites_tests.c

OBJ = 	$(SRC:.c=.o)

NAME = solver

CFLAGS = -I./include -L./lib/my -lmy -g3

all: $(NAME)

$(NAME): $(OBJ)
		make -C lib/my
		gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f *.o
		$(MAKE) -C lib/my clean

fclean:	clean
		rm -f $(NAME)
		$(MAKE) -C lib/my fclean

re: fclean all

.PHONY: all $(NAME) clean fclean re
