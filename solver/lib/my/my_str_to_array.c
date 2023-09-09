/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_str_to_array
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

void get_line_col(char *str, int *nb_line, int *nb_col)
{
    for (int i = 0, c = 0; i < my_strlen(str); i++, c++) {
        if (str[i] == '\0' || str[i] == '\n') {
            (c > *nb_col) ? *nb_col = c : c;
            c = 0;
            (*nb_line)++;
        }
    }
    (*nb_line)++;
    (*nb_col)--;
}

/**
 * @brief
 * Need to be free
 *
 * @param str
 * @return char**
 */
char **my_str_to_array(char *str)
{
    char **array;
    int nb_col = 0;
    int nb_line = 1;
    get_line_col(str, &nb_line, &nb_col);
    array = malloc(sizeof(char*) * nb_line);
    for (int i = 0; i < nb_line; i++) {
        array[i] = malloc(sizeof(char) * nb_col);
    }
    for (int i = 0, j = 0, y = 0, x = 0; i < my_strlen(str); i++, j++) {
        if (str[j] != '\n' && str[j] != '\0') {
            array[x][y] = str[j];
            y++;
        } else {
            array[x][y] = '\0';
            x++;
            y = 0;
        }
    }
    array[nb_line] = NULL;
    return array;
}
