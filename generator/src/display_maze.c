/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** display_maze
*/

#include "generator.h"

int display_maze(maze_t *maze)
{
    int i;
    for (i = 0; i < maze->line - 1; i++) {
        write(1, maze->map[i], my_strlen(maze->map[i]));
        write(1, "\n", 1);
    }
    write(1, maze->map[i], my_strlen(maze->map[i]));
    return 0;
}
