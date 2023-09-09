/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** main
*/

#include "../include/generator.h"

int main(int ac, char **av)
{
    time_t t;
    maze_t *maze = malloc(sizeof(maze_t));
    srand((unsigned) time(&t));
    maze->perfect = 0;
    if (is_good_parameter(ac, av) == 0) {
        if (ac == 4)
            need_perfect(av[3]) == 0 ? maze->perfect = 1 : 0;
        generate_maze(av, maze);
    }
    free(maze);
    return 0;
}
