/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** main
*/

#include "solver.h"

int main(int ac, char **av)
{
    map_t *map = malloc(sizeof(map_t));
    char **maze = parser(av[1]);
    map->nb_lines = is_nb_lines(maze, map);
    map->nb_col = is_nb_col(maze, map);
    is_perfect(maze, 0, 0, map);
    return 0;
}
