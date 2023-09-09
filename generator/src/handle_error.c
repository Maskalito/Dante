/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** handle_error
*/

#include "../include/generator.h"

int is_good_parameter(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return 84;
    if (my_getnbr(av[1]) < 0 || my_getnbr(av[2]) < 0)
        return 84;
    return 0;
}

int need_perfect(char *argument)
{
    if (my_strlen(argument) != 7)
        return 84;
    if (my_strcmp(argument, "perfect") != 0)
        return 84;
    return 0;
}
