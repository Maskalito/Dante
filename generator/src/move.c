/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** move
*/

#include "generator.h"

int can_move(maze_t *maze, char *direction)
{
    if (my_strcmp(direction, "up") == 0)
        return go_up(maze);
    if (my_strcmp(direction, "down") == 0)
        return go_down(maze);
    if (my_strcmp(direction, "left") == 0)
        return go_left(maze);
    if (my_strcmp(direction, "right") == 0)
        return go_right(maze);
}

int move(maze_t *maze)
{
    char *directions[] = {"down", "up", "left", "right"};
    char *direction;
    int j;
    int index[4] = {0, 1, 2, 3};

    for (int i = 3; i > 0; i--) {
        j = rand() % i;
        int temp = index[i];
        index[i] = index[j];
        index[j] = temp;
    }
    for (int i = 0; i < 4; i++) {
        direction = directions[index[i]];
        if (can_move(maze, direction) == 0)
            return 0;
    }
    return 84;
}
