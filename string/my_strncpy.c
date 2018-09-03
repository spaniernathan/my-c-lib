/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** copy n characters of a string
*/

#include "../include/my_info.h"

char *my_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	if (my_strlen(src) < n) {
		dest[i] = '\0';
	}
	return (dest);
}
