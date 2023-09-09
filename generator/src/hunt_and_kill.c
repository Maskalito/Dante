/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.averly
** File description:
** hunt_and_kill
*/

#include "generator.h"

int connect_horizontal(maze_t *maze, int i, int j)
{
    if (j < maze->col - 2) {
        if (maze->map[i][j + 2] == '*') {
            maze->map[i][j + 1] = '*';
            maze->map[i][j] = '*';
            return 1;
        }
    }
    if (j > 1) {
        if (maze->map[i][j - 2] == '*') {
            maze->map[i][j - 1] = '*';
            maze->map[i][j] = '*';
            return 1;
        }
    }
    return 0;
}

int connect_vertical(maze_t *maze, int i, int j)
{
    if (i < maze->line - 2) {
        if (maze->map[i + 2][j] == '*') {
            maze->map[i + 1][j] = '*';
            maze->map[i][j] = '*';
            return 1;
        }
    }
    if (i > 1) {
        if (maze->map[i - 2][j] == '*') {
            maze->map[i - 1][j] = '*';
            maze->map[i][j] = '*';
            return 1;
        }
    }
    return 0;
}

int connect_maze(maze_t *maze, int i, int j)
{
    int connected;
    if (maze->map[i][j] == 'O') {
        connected = connect_horizontal(maze, i, j);
        if (connected == 1)
            return 1;
        connected = connect_vertical(maze, i, j);
        if (connected == 1)
            return 1;
    }
    return 0;
}

int hunt_mode(maze_t *maze)
{
    int found = 0;
    int connected = 0;
    int i;
    int j;
    maze->pos[0] = -1;
    maze->pos[1] = -1;
    for (i = 0; i < maze->line && found == 0; i++) {
        for (j = 0; j < maze->col && found == 0; j++) {
            found = connect_maze(maze, i, j);
        }
    }
    if (found == 1) {
        maze->pos[0] = i - 1;
        maze->pos[1] = j - 1;
        return 0;
    }
    return 0;
}

void hunt_and_kill_loop(maze_t *maze, int can_move)
{
    while (maze->pos[0] != -1 && maze->pos[1] != -1) {
        while (can_move == 0) {
            can_move = move(maze);
        }
        hunt_mode(maze);
        can_move = 0;
    }
}
