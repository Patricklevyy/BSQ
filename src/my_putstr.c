/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** my_putstr
*/

#include "../include/my.h"

int my_putstr (char const *str)
{
    int i;
    for (i = 0; str[i] != '\0' ; i++){
        my_putchar(str[i]);
    }
    return (0);
}
