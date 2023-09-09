/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_strdup
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(const char* str)
{
    size_t len = my_strlen(str);
    char *new_str = malloc(sizeof(char) * my_strlen(str));
    my_strcpy(new_str, str);
    return new_str;
}
