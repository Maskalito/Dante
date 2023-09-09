/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_array_len
*/

#include <stdio.h>

int my_array_len(char **array)
{
    int i;
    for (i = 0; array[i] != NULL; i++);
    return i;
}
