##
## EPITECH PROJECT, 2023
## Project make by Clément Barrier and Axel Averly
## File description:
## Makefile
##

all:
	 make -C generator
	 make -C solver

clean:
		make -C generator clean
		make -C solver clean

fclean:
		make -C generator fclean
		make -C solver fclean

re:
	make -C generator re
	make -C solver re

.SILENT: all clean fclean re
