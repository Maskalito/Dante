/*
** EPITECH PROJECT, 2022
** Function make by Clément Barrier
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
