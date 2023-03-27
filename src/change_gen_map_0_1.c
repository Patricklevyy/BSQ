/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** change_gen_map_0_1
*/

#include "../include/my.h"

int **change_gen_map_0_1(int **tab, int len, char *pattern)
{
    int i = 0;
    int m = 0;
    int j = 0;
    for (i = 0; i != len; i++) {
        for (j = 0; j != len; j++) {
            tab[i][j] = condition_put_0_1(pattern[m]);
            m++;
        }
        m++;
    }
    return (tab);
}

char **change_gen_map_char(char **av, char **bsq, char *pattern)
{
    int p = 0;
    int s = 0;
    int len = my_getnbr(av[1]);
    int m = 0;
    for (p = 0; p != len; p++) {
        for (s = 0; s != len; s++) {
            bsq[p][s] = pattern[m];
            m++;
        }
        bsq[p][s] = '\0';
        m++;
    }
    bsq[p] = NULL;
    pattern[m] = '\0';
    return (bsq);
}
