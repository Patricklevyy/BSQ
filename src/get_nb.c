/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** get_nb
*/

#include "../include/my.h"

int get_nb_rows(char *buffer)
{
    int s = 0;
    int nb_rows = 0;
    for (s = 0; buffer[s] != '\0'; s++) {
        if (buffer[s] == '\n') {
            nb_rows++;
        }
    }
    return (nb_rows - 1);
}

int get_nb_cols(char *buffer)
{
    int nb_cols = 0;
    int ind = 0;
    for (int z = ind; buffer[z] != '\n'; z++) {
        ind++;
    }
    ind++;
    for (int t = ind; buffer[t] != '\n'; t++) {
        nb_cols++;
    }
    return nb_cols;
}
