/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-BSQ-gnanmienlie-patrick-levy.n-da
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    struct stat file_stat;
    if (ac != 2 && ac != 3) {
        return 84;
    }
    if (ac == 2) {
        if (stat(av[1], &file_stat) != 0) {
            return 84;
        }
        int re = base_bsq(av);
        if (re == 84) {
            return 84;
        }
    } else {
        if (error_1(av[2]) == 1) {
            return 84;
        }
        generate_map(av);
    }
    return 0;
}
