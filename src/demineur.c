/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** demineur
*/

#include "../include/my.h"

int check_numbers_left_high(int **array, int lines, int cols)
{
    int top = array[lines][cols - 1];
    int top_left = array[lines - 1][cols - 1];
    int left = array[lines - 1][cols];

    if (top == top_left && top == left && top_left == left)
        return (top + 1);
    if (top <= top_left && top <= left)
        return (top + 1);
    if (top_left <= top && top_left <= left)
        return (top_left + 1);
    if (left <= top && left <= top_left)
        return (left + 1);
    return 0;
}

int change_nb_with_dem(int **array, int lines, int cols)
{
    if (array[lines][cols] != 0)
        array[lines][cols] = check_numbers_left_high(array, lines, cols);
    return 0;
}

int **apply_demineur(int **array, int nb_rows, int nb_cols)
{
    for (int a = 1; a != nb_rows; a++) {
        for (int b = 1; b != nb_cols; b++)
            change_nb_with_dem(array, a, b);
    }
    return (array);
}
