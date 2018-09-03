/*
** EPITECH PROJECT, 2017
** Day07
** File description:
** my_strcat
*/

#include "../include/my_info.h"

char *my_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_size = my_strlen(dest);

	while (src[i] != '\0') {
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
