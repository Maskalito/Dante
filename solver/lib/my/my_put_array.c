/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_put_array
*/

#include <stdio.h>

int my_array_len(char **array);

void my_putstr(char const *str);

void my_put_array(char **array)
{
    int i = 0;
    for (; i < my_array_len(array) - 2; i++) {
        my_putstr(array[i]);
        my_putstr("\n");
    }
    my_putstr(array[i]);
}
