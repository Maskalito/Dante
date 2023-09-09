/*
** EPITECH PROJECT, 2022
** Function make by Clément Barrier
** File description:
** my_getnbr
*/
#include <stdio.h>

void stop_reading(int *var_number)
{
    if (*var_number == 1)
        *var_number = 2;
}

int check_overflow(long *result)
{
    if (*result > 2147483647 || *result < -2147483648) {
        *result = 0;
        return (*result);
    }
}

int my_getnbr(char const *str)
{
    long result = 0;
    int negative = 1;
    int var_number = 0;
    for (int i = 0; str[i] != '\0'; i ++) {
        if (str[i] == '-' && var_number == 0) {
            negative *= -1;
        }
        if (str[i] >= '0' && str[i] <= '9' && var_number != 2) {
            result *= 10;
            result += str[i] - '0';
            var_number = 1;
        } else {
            stop_reading(&var_number);
        }
    }
    result *= negative;
    check_overflow(&result);
    return (result);
}
