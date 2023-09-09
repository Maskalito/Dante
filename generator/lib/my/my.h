/*
** EPITECH PROJECT, 2023
** Personal library with includes of common lib of C
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
/*------------INCLUDES---------------*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

/*-----------PROTOTYPES--------------*/

    int my_compute_power_rec(int nb, int p);
    int my_compute_square_root(int nb);
    int my_getnbr(char const *str);
    void my_put_array(char **array);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char const *str);
    char **my_str_to_word_array(char *str);
    char *my_strcat(char *dest, char const *src);
    int my_strcmp(char *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    int my_strlen(char const *str);
    int my_arraylen(char **array);
    char **my_str_to_space_array(char *string);
    char *my_strdup(const char* str);

/*-------------END----------------*/

#endif /* !MY_H_ */
