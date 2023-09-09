/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** solver
*/

#ifndef SOLVER_H_
    #define SOLVER_H_

/*-------INCLUDES-----------*/

    #include "../lib/my/my.h"
    #include <fcntl.h>
    #include <sys/stat.h>

/*-------STRUCTURES---------*/

    typedef struct map {
        int nb_lines;
        int nb_col;
        char **save;
    } map_t;

/*-------PROTOTYPES---------*/

    int prerequisites_tests(int ac, char **av);
    int display_help(char *av);
    int handle_non_existant_file(char *av);
    int is_perfect(char **maze, int y, int x, map_t *map);
    int is_nb_lines(char **tab, map_t *map);
    int is_nb_col(char **tab, map_t *map);
    char **parser(char *path);

/*----------END-------------*/

#endif /* !SOLVER_H_ */
