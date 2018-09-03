/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#include <stdlib.h>
#include "../include/my_info.h"
#include "../include/my_string.h"

int is_minus(int nbr)
{
	int min = 0;

	if (nbr < 0) {
		nbr = -nbr;
		min++;
	}
	return (min);
}

char *my_convert_base(int nbr, char *base)
{
	int len_b = my_strlen(base);
	int i = 0;
	int temp = 0;
	int minus = is_minus(nbr);
	char *result = malloc(sizeof(char *));

	while (nbr > 0) {
		temp = (nbr % len_b);
		if (temp >= 10)
			result[i] = temp + '7';
		else
			result[i] = temp + '0';
		nbr = nbr / len_b;
		i++;
	}
	if (minus > 0)
		result[i++] = '-';
	result[i] = '\0';
	return (my_revstr(result));
}