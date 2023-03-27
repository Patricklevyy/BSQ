/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <string.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <sys/stat.h>

    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr (char const *str);
    int my_strlen( char const * str);
    int my_getnbr(char *str);
    int check_numbers(char c);
    int get_nb_rows(char *buffer);
    int get_nb_cols(char *buffer);
    int base_bsq(char **av);
    char *open_file(char *filepath);
    char **malloc_char_array(char *str);
    int **malloc_int_array(char *tmp);
    int **change_map_0_1(int **tab, char *buffer, int nb_rows, int nb_cols);
    void display_int(int **map, int nb_cols, int nb_rows);
    void display_char(char **array);
    char** change_map_char(char **bsq, char *buffer);
    int check_numbers_left_high(int **array, int lines, int cols);
    int **apply_demineur(int **array, int nb_rows, int nb_cols);
    int find_biggest_nb(int **array, int nb_rows, int nb_cols);
    char **replace_by_x(char **tab, int **array, int rows, int cols);
    int get_coord_x(int **array, int nb_rows, int nb_cols, int x);
    int get_coord_y(int **array, int nb_rows, int nb_cols, int y);
    int generate_map(char **av);
    void display_arr(char **map, int nb);
    int change_nb_with_dem(int **array, int lines, int cols);
    int find_biggest_nb_in_row(int *rows, int nb_cols);
    int **malloc_int_array_generate_map(char **av);
    int condition_put_0_1(char c);
    char **change_gen_map_char(char **av,char **bsq, char *pattern);
    int **change_gen_map_0_1(int **tab, int len, char *pattern);
    int condition_put_0_1(char c);
    int error_1(char *str);
    char *my_strcat(char *dest, char const *src);
    int error_nb_lines(char *str);
    int check_number_of_rows(char *buffer, int nb_rows);
    void convert_map_to_0_1(int **array, char *buffer,
    int nb_rows, int nb_cols);
    void convert_map_to_char(char **bsq, char *buffer);
    void free_tab_n_array(char *buffer, char **bsq, int **array, int nb_rows);
    void find_square_in_gen_map(char **tab, int **array, char *result, int len);
    int error_carac_map(const char *buffer);

#endif /* !MY_H_ */
