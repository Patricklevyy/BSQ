/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** change_map
*/

#include "../include/my.h"

int condition_put_0_1(char c)
{
    if (c == '.')
        return 1;
    if (c == 'o')
        return 0;
    return -1;
}

int **change_map_0_1(int **tab, char *buffer, int nb_rows, int nb_cols)
{
    int i = 0;
    int m = 0;
    int j = 0;
    int ind = 0;
    for (m = ind; buffer[m] != '\n'; m++) {
        ind++;
    }
    m++;
    for (i = 0; i != nb_rows; i++) {
        for (j = 0; j != nb_cols; j++) {
            tab[i][j] = condition_put_0_1(buffer[m]);
            m++;
        }
        m++;
        tab[i][j] = '\0';
    }
    return (tab);
}

char **change_map_char(char **bsq, char *buffer)
{
    int p = 0; int s = 0;
    int nb_rows = get_nb_rows(buffer);
    int nb_cols = get_nb_cols(buffer);
    int m = 0; int ind = 0;
    for (m = ind; buffer[m] != '\n'; m++) {
        ind++;
    }
    m++;
    for (p = 0; p != nb_rows; p++) {
        for (s = 0; s != nb_cols; s++) {
            bsq[p][s] = buffer[m];
            m++;
        }
        bsq[p][s] = '\0';
        m++;
    }
    bsq[p] = NULL;
    buffer[m] = '\0';
    return (bsq);
}
