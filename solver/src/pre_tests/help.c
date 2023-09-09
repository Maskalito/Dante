/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** help
*/

#include "solver.h"

int display_help(char *av)
{
    if (av[0] == '-' && av[1] == 'h' && my_strlen(av) == 2) {
        write(1, "USAGE\n\t./solver maze.txt\nDESCRIPTION\n\tmaze.txt   ", 50);
        write(1, "file representating a maze, containing 'X' for wall an", 55);
        write(1, "d '*' for space.\n\tThe solver will find the way to go", 53);
        write(1, " from the top left point of the maze to the bottom rig", 55);
        write(1, "ht point.\n\tIf it does not find any path displays 'no", 53);
        write(1, " solution found'.\n", 19);
        return 0;
    }
    return 1;
}
