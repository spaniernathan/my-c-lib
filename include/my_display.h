/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#ifndef MY_DISPLAY_
#define MY_DISPLAY_

#include <stdarg.h>

/* display */

/* print a character */
void my_putchar(char);

/* print a number */
void my_put_nbr(int);

/* print a string */
void my_putstr(char *);

/* print a char ** */
void my_show_word_array(char **tab);

/***********my_printf func***********/

/* printf-like function */
int my_printf(char *, ...);

/* printf-like function */
int find_arg(va_list list, char, int *);

/* printf-like function */
int p_str(va_list list, int *);

/* printf-like function */
int p_int(va_list list, int *);

/* printf-like function */
int p_char(va_list list, int *);

/* printf-like function */
int p_percent(va_list list, int *);

/* printf-like function */
int p_ptr_mem(va_list list, int *);

/* printf-like function */
int p_o(va_list list, int *);

/* printf-like function */
int p_u(va_list list, int *);

/* printf-like function */
int p_x(va_list list, int *);

/* printf-like function */
int p_x_upcase(va_list list, int *);

/* printf-like function */
int p_b(va_list list, int *);

/***********end my_printf func***********/

/* end display */

#endif /* MY_DISPLAY_ */