/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_str_to_word_tab
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

int count_word(char *str)
{
    int i;
    int word = 0;
    int len = my_strlen(str);

    if (len == 1)
        return 0;
    for (i = 0; i < len + 1; i++)
        if (str[i] == '\n' || str[i] == '\0') {
            word++;
        }
    return word;
}

/**
 * @brief
 * Return the 2d array version of the string passed as parameter,
 *  where the delimiter is ' '.
 * It need to be free.
 * @param string
 * @return char**
 */
char **my_str_to_space_array(char *string)
{
    int j;
    int index = 0;
    char **array = malloc(sizeof(char *) * (count_word(string) + 1));
    for (int i = 0; i < count_word(string); i++) {
        for (j = 0; string[index] != ' ' && string[index] !=
        '\0'; j++, index++);
        array[i] = malloc(sizeof(char) * (j + 1));
    }
    for (int i = 0, x = 0, y = 0; i < my_strlen(string); i++) {
        if (string[i] != '\n' || string[i] != '\0') {
            array[x][y] = string[i];
            y++;
        }
        if (string[i] == '\n' || string[i] == '\0') {
            array[x][y] = '\0';
            y = 0; x++;
        }
    } array[count_word(string)] = NULL;
    return array;
}
