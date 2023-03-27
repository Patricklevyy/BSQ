/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** replace_by_x
*/

#include "../include/my.h"

char **replace_by_x(char **tab, int **array, int nb_rows, int nb_cols)
{
    int big = find_biggest_nb(array, nb_rows, nb_cols);
    int x = get_coord_x(array, nb_rows, nb_cols, big);
    int y = get_coord_y(array, nb_rows, nb_cols, big);

    for (int a = x - (big - 1); a <= x; a++) {
        for (int b = y - (big - 1); b <= y; b++)
            tab[a][b] = 'x';
    }
    return (tab);
}
