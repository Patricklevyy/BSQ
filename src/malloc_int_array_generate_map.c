/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** malloc_int_array_generate_map
*/

#include "../include/my.h"

int **malloc_int_array_generate_map(char **av)
{
    int len = my_getnbr(av[1]);
    int **array = malloc(sizeof(int *) * (len + 1));
    int m = 0;
    for (; m != len; m++) {
        array[m] = malloc(sizeof(int) * (len + 1));
    }
    array[m] = NULL;
    return (array);
}
