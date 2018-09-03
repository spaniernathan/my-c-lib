/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#include <stdarg.h>
#include <unistd.h>
#include "../include/my_display.h"
#include "../include/my_info.h"
#include "../include/my_math.h"

int p_char(va_list list, int *return_val)
{
	int c = va_arg(list, int);

	write(1, &c, 1);
	*return_val = *return_val + 1;
	return (0);
}

int p_int(va_list list, int *return_val)
{
	(void)return_val;
	my_put_nbr(va_arg(list, int));
	return (0);
}

int p_str(va_list list, int *return_val)
{
	char *str = va_arg(list, char*);

	*return_val += my_strlen(str);
	my_putstr(str);
	return (0);
}

int p_percent(va_list list, int *return_val)
{
	char c = '%';

	(void)list;
	write(1, &c, 1);
	*return_val = *return_val + 1;
	return (0);
}

int p_ptr_mem(va_list list, int *return_val)
{
	char *ptr_val = my_convert_base_lowercase(va_arg(list, int),
		 "0123456789ABCDEF");

	*return_val += my_strlen(ptr_val);
	my_putstr("0x");
	*return_val += 2;
	my_putstr(ptr_val);
	return (0);
}