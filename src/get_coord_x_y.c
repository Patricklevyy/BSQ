/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** get_coord_x
*/

#include "../include/my.h"

int get_coord_x2(int *row, int nb_cols, int x)
{
    for (int p = 0; p != nb_cols; p++) {
        if (row[p] == x)
            return p;
    }
    return -1;
}

int get_coord_x(int **array, int nb_rows, int nb_cols, int x)
{
    for (int t = 0; t != nb_rows; t++) {
        int y = get_coord_x2(array[t], nb_cols, x);
        if (y != -1)
            return t;
    }
    return -1;
}

int get_coord_y_2(int *row, int nb_cols, int y)
{
    for (int h = 0; h != nb_cols; h++) {
        if (row[h] == y)
            return h;
    }
    return -1;
}

int get_coord_y(int **array, int nb_rows, int nb_cols, int y)
{
    for (int t = 0; t != nb_rows; t++) {
        int x = get_coord_y_2(array[t], nb_cols, y);
        if (x != -1)
            return x;
    }
    return -1;
}
