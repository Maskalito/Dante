/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** create_maze
*/

#include "generator.h"

int start_maze(maze_t *maze)
{
    char *even_string = malloc(sizeof(char) * maze->col + 1);
    char *odd_string = malloc(sizeof(char) * maze->col + 1);
    for (int i = 0; i < maze->col; i++) {
        if (i % 2 == 0) {
            even_string[i] = 'O'; odd_string[i] = 'X';
        } else {
            even_string[i] = 'X'; odd_string[i] = 'X';
        }
    }
    even_string[maze->col] = '\0'; odd_string[maze->col] = '\0';
    for (int y = 0; y < maze->line; y++)
        if (y % 2 == 0)
            my_strcpy(maze->map[y], even_string);
        else
            my_strcpy(maze->map[y], odd_string);
    maze->map[maze->line - 1][maze->col] = '\0';
    maze->map[maze->line] = NULL;
    free(even_string); free(odd_string);
}

int spawn_point(maze_t *maze)
{
    int found = 0;
    int x, y;

    while (found == 0) {
        y = 1 + (rand() % maze->line - 1);
        x = 1 + (rand() % maze->col - 1);
        if (maze->map[y][x] == 'O') {
            maze->map[y][x] = '*';
            maze->pos[0] = y;
            maze->pos[1] = x;
            found = 1;
        }
    }
    return 0;
}

void set_maze_parameters(char **parameters, maze_t *maze)
{
    maze->col = my_getnbr(parameters[1]);
    maze->line = my_getnbr(parameters[2]);
    maze->map = malloc(sizeof(char *) * (maze->line + 1));
    maze->pos = malloc(sizeof(int) * 2);
}

int generate_maze(char **parameters, maze_t *maze)
{
    int can_move = 0;
    set_maze_parameters(parameters, maze);
    for (int i = 0; i < maze->line; i++)
        maze->map[i] = malloc(sizeof(char) * (maze->col + 1));
    start_maze(maze);
    spawn_point(maze);
    hunt_and_kill_loop(maze, can_move);
    if (maze->line % 2 == 0 || maze->col % 2 == 0) {
        maze->map[maze->line - 1][maze->col - 1] = '*';
        maze->map[maze->line - 1][maze->col - 2] = '*';
    }
    display_maze(maze);
    free_maze(maze);
    return 0;
}
