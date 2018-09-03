/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** return a reversed string
*/

#include "../include/my_info.h"

char *my_revstr(char *str)
{
	int i = 0;
	int j = my_strlen(str) - 1;;
	char temp;

	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
