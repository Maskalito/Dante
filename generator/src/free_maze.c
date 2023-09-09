/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** free_maze
*/

#include "generator.h"

void free_maze(maze_t *maze)
{
    for (int i = 0; maze->map[i]; i++)
        free(maze->map[i]);
    free(maze->map);
    free(maze->pos);
}
