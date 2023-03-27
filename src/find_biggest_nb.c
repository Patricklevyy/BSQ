/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** find_biggest_nb
*/

#include "../include/my.h"

int find_biggest_nb_in_row(int *row, int nb_cols)
{
    int biggest_nb = row[0];
    for (int l = 1; l != nb_cols; l++) {
        if (row[l] > biggest_nb)
            biggest_nb = row[l];
    }
    return biggest_nb;
}

int find_biggest_nb(int **array, int nb_rows, int nb_cols)
{
    int biggest_nb = find_biggest_nb_in_row(array[0], nb_cols);
    for (int p = 1; p != nb_rows; p++) {
        int biggest_nb_in_row = find_biggest_nb_in_row(array[p], nb_cols);
        if (biggest_nb_in_row > biggest_nb)
            biggest_nb = biggest_nb_in_row;
    }
    return biggest_nb;
}
