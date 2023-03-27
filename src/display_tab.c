/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** display_tab
*/

#include "../include/my.h"

void display_int(int **map, int nb_cols, int nb_rows)
{
    for (int p = 0; p != nb_rows; p++) {
        for (int l = 0; l != nb_cols; l++) {
            my_put_nbr(map[p][l]);
        }
        my_putchar('\n');
    }
}

void display_char(char **array)
{
    int i;
    for (i = 0; array[i] != NULL; i++) {
        write(1, array[i], my_strlen(array[i]));
        my_putchar('\n');
    }
}
