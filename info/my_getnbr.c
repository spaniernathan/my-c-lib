/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** get a numer out of a string
*/

#include "../include/my_math.h"

static int minus_counter(char *str)
{
	int minus_counter = 0;

	for (int i = 0; (str[i] < '0' || str[i] > '9') && str[i]; i++) {
		if (str[i] == '-')
			minus_counter++;
	}
	return (minus_counter);
}

int my_getnbr(char *str)
{
	int i = 0;
	int x = 0;
	int minus = minus_counter(str);

	while (str[i]) {
		if (str[i] >= '0' && str[i] <= '9')
			x = ((x * 10) + (str[i] - '0'));
		i++;
		if (str[i] < '0' || str[i] > '9') {
			if (minus % 2 == 1)
				return (-x);
		}
	}
	return (x);
}