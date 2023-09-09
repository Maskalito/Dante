/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** handle_direction
*/

#include "generator.h"

int go_left(maze_t *maze)
{
    char pos;
    char pos2;
    if (maze->pos[1] > 1) {
        pos = maze->map[maze->pos[0]][maze->pos[1] - 1];
        pos2 = maze->map[maze->pos[0]][maze->pos[1] - 2];
        if (pos == 'X' && pos2 == 'O') {
            maze->map[maze->pos[0]][maze->pos[1] - 1] = '*';
            maze->map[maze->pos[0]][maze->pos[1] - 2] = '*';
            maze->pos[1] -= 2;
            return 0;
        }
    }
    return 84;
}

/**
 * @brief
 * just change the line 32 : from 'if (maze->pos[1] < maze->line - 2) {'
 * to 'if (maze->pos[1] < maze->col - 2) {'
 * @param maze
 * @return int
 */
int go_right(maze_t *maze)
{
    char pos;
    char pos2;
    if (maze->pos[1] < maze->col - 2) {
        pos = maze->map[maze->pos[0]][maze->pos[1] + 1];
        pos2 = maze->map[maze->pos[0]][maze->pos[1] + 2];
        if (pos == 'X' && pos2 == 'O') {
            maze->map[maze->pos[0]][maze->pos[1] + 1] = '*';
            maze->map[maze->pos[0]][maze->pos[1] + 2] = '*';
            maze->pos[1] += 2;
            return 0;
        }
    }
    return 84;
}

int go_up(maze_t *maze)
{
    char pos;
    char pos2;
    if (maze->pos[0] > 1) {
        pos = maze->map[maze->pos[0] - 1][maze->pos[1]];
        pos2 = maze->map[maze->pos[0] - 2][maze->pos[1]];
        if (pos == 'X' && pos2 == 'O') {
            maze->map[maze->pos[0] - 1][maze->pos[1]] = '*';
            maze->map[maze->pos[0] - 2][maze->pos[1]] = '*';
            maze->pos[0] -= 2;
            return 0;
        }
    }
    return 84;
}

int go_down(maze_t *maze)
{
    char pos;
    char pos2;
    if (maze->pos[0] < maze->line - 2) {
        pos = maze->map[maze->pos[0] + 1][maze->pos[1]];
        pos2 = maze->map[maze->pos[0] + 2][maze->pos[1]];
        if (pos == 'X' && pos2 == 'O') {
            maze->map[maze->pos[0] + 1][maze->pos[1]] = '*';
            maze->map[maze->pos[0] + 2][maze->pos[1]] = '*';
            maze->pos[0] += 2;
            return 0;
        }
    }
    return 84;
}
