##
## EPITECH PROJECT, 2023
## Project make by Clément Barrier and Axel Averly
## File description:
## Makefile
##

SRC = 	src/main.c \
		src/create_maze.c \
		src/handle_error.c \
		src/display_maze.c \
		src/free_maze.c \
		src/hunt_and_kill.c \
		src/move.c \
		src/handle_direction.c \

OBJ = 	$(SRC:.c=.o)

NAME = generator

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
