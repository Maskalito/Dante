/*
** EPITECH PROJECT, 2022
** Function make by Clément Barrier
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char *s1, char const *s2)
{
    int len = 0;
    if (my_strlen(s1) >= my_strlen(s2))
        len = my_strlen(s2);
    else
        len = my_strlen(s1);
    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return 0;
}
