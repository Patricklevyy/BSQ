/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** 001
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    int q = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            q = (nb % 10);
            nb = nb / 10;
            my_put_nbr(nb);
            my_putchar(48 + q);
        } else {
            my_putchar(48 + nb);
        }
    }
    return 0;
}
