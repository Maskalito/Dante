/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_arraylen
*/

#include <stdio.h>

int my_arraylen(char **array)
{
    int i;
    for (i = 0; array[i] != NULL; i++);
    return i;
}
