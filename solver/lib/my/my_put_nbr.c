/*
** EPITECH PROJECT, 2022
** Function make by Clément Barrier
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= (-1);
        my_putchar(45);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return (0);
}
