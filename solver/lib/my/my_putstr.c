/*
** EPITECH PROJECT, 2022
** Function make by Clément Barrier
** File description:
** my_putstr
*/
#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
