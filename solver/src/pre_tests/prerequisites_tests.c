/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** prerequist_test
*/

#include "solver.h"

int prerequisites_tests(int ac, char **av)
{
    int solution = 0;
    if (ac != 2) {
        write(2, "bad argument : try ./solver/solver -h\n", 39);
        return 84;
    }
    if (display_help(av[1]) == 0)
        return 0;
    if (handle_non_existant_file(av[1]) == 84) {
        write(2, "invalid maze file : try ./solver/solver -h\n", 44);
        return 84;
    }
    return solution;
}
