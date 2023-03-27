/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** bsq
*/

#include "../include/my.h"

int check_number_of_rows(char *buffer, int nb_rows)
{
    int er = error_nb_lines(buffer);
    if (er != nb_rows) {
        my_putstr("wrong number of rows!");
        my_putchar('\n');
        return 84;
    }
    return 0;
}

void convert_map_to_0_1(int **array, char *buffer, int nb_rows, int nb_cols)
{
    change_map_0_1(array, buffer, nb_rows, nb_cols);
}

void convert_map_to_char(char **bsq, char *buffer)
{
    change_map_char(bsq, buffer);
}

void free_tab_n_array(char *buffer, char **bsq, int **array, int nb_rows)
{
    free(buffer);
    for (int i = 0; bsq[i]; i++)
        free(bsq[i]);
    free(bsq);
    for (int i = 0; i != nb_rows - 1; i++) {
        free(array[i]);
    }
    free(array);
}

int base_bsq(char **av)
{
    char *buffer = open_file(av[1]);
    int nb_rows = get_nb_rows(buffer);
    int nb_cols = get_nb_cols(buffer);
    if (check_number_of_rows(buffer, nb_rows))
        return 84;
    char **bsq = malloc_char_array(buffer);
    int **array = malloc_int_array(buffer);
    change_map_0_1(array, buffer, nb_rows, nb_cols);
    convert_map_to_char(bsq, buffer);
    apply_demineur(array, nb_rows, nb_cols);
    replace_by_x(bsq, array, nb_rows, nb_cols);
    display_char(bsq);
    free_tab_n_array(buffer, bsq, array, nb_rows);
    return 0;
}
