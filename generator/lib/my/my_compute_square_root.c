/*
** EPITECH PROJECT, 2022
** Function make by Clément Barrier
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int sqrt = 0;
    int odd_nb = 1;
    if (nb <= 0) {
        return (0);
    }
    while (nb != 0) {
        if (nb - odd_nb < 0) {
            return (0);
        }
        nb -= odd_nb;
        sqrt ++;
        odd_nb += 2;
    }
    return (sqrt);
}
