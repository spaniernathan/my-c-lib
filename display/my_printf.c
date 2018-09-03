/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#include <unistd.h>
#include <stdio.h>
#include "../include/my_display.h"

/******************************************************/
/**** %[flags][width][.precision][length]specifier ****/
/******************************************************/

int my_printf(char *str, ...)
{
	va_list list;
	int i = 0;
	int return_val = 0;

	va_start(list, str);
	while (str[i])
	{
		if (str[i] != '%') {
			my_putchar(str[i]);
			i++;
			return_val++;
		}
		else if (str[i] == '%') {
			find_arg(list, str[i + 1], &return_val);
			i += 2;
		}
	}
	va_end(list);
	return (return_val);
}

int find_arg(va_list list, char type, int *return_val)
{
	int i = 0;
	char flags[11] = {'c', 'd', 'i', 's', '%', 'p', 'o', 'u', 'x', 'X', '\0'};

	int (*tab[10])(va_list, int *) = {p_char, p_int, p_int, p_str,
		p_percent, p_ptr_mem, p_o, p_u, p_x, p_x_upcase};
	while (flags[i]) {
		if (type == flags[i]) {
			tab[i](list, return_val);
		}
	i++;
	}
	return (0);
}