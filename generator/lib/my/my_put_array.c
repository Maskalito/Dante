/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_put_array
*/

#include <stdio.h>

void my_putstr(char const *str);

void my_put_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putstr("\n");
    }
}
