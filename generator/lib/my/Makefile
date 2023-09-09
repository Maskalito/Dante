##
## EPITECH PROJECT, 2022
## Project make by Clément Barrier and Axel Averly
## File description:
## Makefile
##

SRC =	my_compute_power_rec.c \
		my_compute_square_root.c \
		my_getnbr.c \
		my_put_array.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_str_to_word_array.c \
		my_strcat.c \
		my_strcpy.c \
		my_strlen.c \
		my_strcmp.c \
		my_str_to_space_array.c \
		my_arraylen.c \
		my_strdup.c \

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

CFLAGS = -I include -L . -lmy

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
