/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** generator
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

/*-------INCLUDES-----------*/

    #include "../lib/my/my.h"
    #include <time.h>

/*------STRUCTURES---------*/

typedef struct maze {
    char **map;
    int *pos;
    int line;
    int col;
    int perfect;
} maze_t;

/*-------PROTOTYPES---------*/

int is_good_parameter(int ac, char **av);
int generate_maze(char **parameters, maze_t *maze);
int display_maze(maze_t *maze);
void free_maze(maze_t *maze);
int hunt_mode(maze_t *maze);
void hunt_and_kill_loop(maze_t *maze, int can_move);
int move(maze_t *maze);
int go_left(maze_t *maze);
int go_right(maze_t *maze);
int go_up(maze_t *maze);
int go_down(maze_t *maze);
int need_perfect(char *argument);

/*----------END-------------*/

#endif /* !GENERATOR_H_ */
