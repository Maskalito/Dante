/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** count
*/

#include "solver.h"

int is_nb_lines(char **tab, map_t *map)
{
    int nb_lines = 0;
    for (; tab[nb_lines] != NULL; nb_lines++);
    return nb_lines - 1;
}

int is_nb_col(char **tab, map_t *map)
{
    int nb_col = 0;
    for (; tab[0][nb_col] != '\0'; nb_col++);
    return nb_col;
}
