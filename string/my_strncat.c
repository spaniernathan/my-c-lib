/*
** EPITECH PROJECT, 2017
** Day07
** File description:
** my_strncat
*/

#include "../include/my_info.h"

char *my_strncat(char *dest, char *src, int nb)
{
	int i = 0;
	int dest_size = my_strlen(dest);

	while (dest[i] && i < nb) {
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
