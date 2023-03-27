/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** generate_map
*/

#include "../include/my.h"

void display_arr(char **map, int nb)
{
    for (int i = 0; i < nb; i++) {
        write(1, map[i], my_strlen(map[i]));
    }
}

void find_square_in_gen_map(char **tab, int **array, char *result, int len)
{
    change_gen_map_0_1(array, len, result);
    apply_demineur(array, len, len);
    replace_by_x(tab, array, len, len);
    display_arr(tab, len);
}

int generate_map(char **av)
{
    int len = my_getnbr(av[1]);
    if (len < 0)
        return 84;
    char *pattern = av[2]; int i = 0; int m = 0; int p = 0;
    char *result = malloc(sizeof(char) * (len * len + len + 1));
    int len_pattern = my_strlen(av[2]);
    char **tab = malloc(sizeof(char *) * (len + 1));
    for (p = 0; p != len; p++) {
        tab[p] = malloc(sizeof(char) * (len + 1));
        for (i = 0; i != len; i++) {
            tab[p][i] = pattern[m];
            m++;
            if (m >= len_pattern) {
                m = 0;
            }
        }
        tab[p][i] = '\n';
        my_strcat(result, tab[p]);
    }
    int **array = malloc_int_array_generate_map(av);
    find_square_in_gen_map(tab, array, result, len);
    return 0;
}
