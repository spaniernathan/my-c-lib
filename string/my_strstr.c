/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** find a string in another one
*/

#include <stdlib.h>
#include "../include/my_info.h"

char *my_strstr(char *str, char *to_find)
{
	int j = 0;
	int len = my_strlen(to_find);

	for (int i = 0; str[i]; i++) {
		if (str[i] == to_find[j])
			j++;
		if (j == len)
			return (str + i - 1);
	}
	return (NULL);
}
