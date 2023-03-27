/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** error_handling
*/

#include "../include/my.h"

int error_1(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '.' && str[i] != 'o') {
            return 1;
        }
    }
    return 0;
}

int error_nb_lines(char *str)
{
    int l = 0;
    char *line = malloc(sizeof(char) * 6);
    for (int i = 0; str[i] != '\n'; i++, l++) {
        line[l] = str[i];
    }
    line[l] = '\0';
    int er = my_getnbr(line);

    return (er);
}
