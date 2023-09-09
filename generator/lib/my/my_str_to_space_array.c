/*
** EPITECH PROJECT, 2023
** Function make by Clément Barrier
** File description:
** my_str_to_word_tab
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

int no_space(char *str, int i)
{
    if (str[i] == ' ' && str[i + 1] == ' ') {
        while (str[i] == ' ' && str[i + 1] == ' ')
            i++;
    }
    return i;
}

int count_word(char *str)
{
    int i;
    int word = 0;
    int len = my_strlen(str);

    if (len == 1)
        return 0;
    for (i = 0; i < len + 1; i++)
        if (str[i] == ' ' || str[i] == '\0') {
            word++;
        }
    return word;
}

/**
 * @brief
 * Remove every useless space in the string passed as argument and return it.
 * @param str
 * @return char*
 */
char *clean_string(char *str)
{
    char *clean_str = malloc(sizeof(char) * my_strlen(str));
    int index_str = 0;
    int index_clean_str = 0;
    index_str = no_space(str, index_str);
    if (str[index_str] == ' ')
        index_str++;
    for (index_str; str[index_str] != '\0'; index_str++, index_clean_str++) {
        clean_str[index_clean_str] = str[index_str];
        index_str = no_space(str, index_str);
    }
    if (clean_str[index_clean_str - 2] == ' ')
        clean_str[index_clean_str - 2] = '\0';
    else
        clean_str[index_clean_str - 1] = '\0';
    return clean_str;
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
    char *str = clean_string(string);
    char **array = malloc(sizeof(char *) * (count_word(str) + 1));
    for (int i = 0; i < count_word(str); i++) {
        for (j = 0; str[index] != ' ' && str[index] != '\0'; j++, index++);
        array[i] = malloc(sizeof(char) * (j + 1));
    }
    for (int i = 0, x = 0, y = 0; i < my_strlen(str); i++) {
        if (str[i] != ' ') {
            array[x][y] = str[i];
            y++;
        }
        if (str[i] == ' ') {
            array[x][y] = '\0';
            y = 0; x++;
        }
    } array[count_word(str)] = NULL;
    return array;
}
