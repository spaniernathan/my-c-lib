/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#include <stdlib.h>
#include "../include/my_string.h"
#include "../include/my_info.h"

char *my_unsigned_lowcase_base(unsigned int nbr, char *base, int *return_val)
{
	unsigned int i = 1;
	unsigned int len_b = my_strlen(base);
	unsigned int temp;
	int j = 0;
	char *tab = malloc(sizeof(char *));

	while (nbr / i >= len_b)
		i *= len_b;
	while (i > 0) {
		temp = nbr / i % len_b;
		tab[j] = base[temp];
		*return_val += 1;
		i = i / len_b;
		j++;
	}
	tab[j] = '\0';
	return (my_strlowcase(tab));
}