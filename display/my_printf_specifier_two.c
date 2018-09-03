/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#include <stdarg.h>
#include "../include/my_display.h"
#include "../include/my_math.h"

int p_o(va_list list, int *return_val)
{
	char *str = my_unsigned_lowcase_base(va_arg(list, unsigned int),
		"01234567", return_val);

	my_putstr(str);
	return (0);
}

int p_u(va_list list, int *return_val)
{
	char *str = my_unsigned_lowcase_base(va_arg(list, unsigned int),
		"0123456789", return_val);

	my_putstr(str);
	return (0);
}

int p_x(va_list list, int *return_val)
{
	char *str = my_unsigned_lowcase_base(va_arg(list, unsigned int),
		"0123456789ABCDEF", return_val);

	my_putstr(str);
	return (0);
}

int p_x_upcase(va_list list, int *return_val)
{
	char *str = my_unsigned_lowcase_base(va_arg(list, unsigned int),
		"0123456789ABCDEF", return_val);

	my_putstr(str);
	return (0);
}