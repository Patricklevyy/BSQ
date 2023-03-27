/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** malloc_char_int
*/

#include "../include/my.h"

char **malloc_char_array(char *str)
{
    int nb_cols = get_nb_cols(str);
    int nb_rows = get_nb_rows(str);
    int i = 0;
    char **bsq = malloc(sizeof(char *) * (nb_rows + 1));
    for (; i != nb_rows; i++) {
        bsq[i] = malloc(sizeof(char) * (nb_cols + 1));
    }
    bsq[i] = NULL;
    return (bsq);
}

int **malloc_int_array(char *tmp)
{
    int nb_cols = get_nb_cols(tmp);
    int nb_rows = get_nb_rows(tmp) + 1;
    int **array = malloc(sizeof(int *) * (nb_rows + 1));
    int m = 0;
    for (; m != nb_rows; m++) {
        array[m] = malloc(sizeof(int) * (nb_cols + 1));
    }
    array[m] = NULL;
    return (array);
}
