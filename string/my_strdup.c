/*
** EPITECH PROJECT, 2017
** Day08
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "../include/my_string.h"
#include "../include/my_info.h"

char *my_strdup(char *src)
{
	char *str = malloc(sizeof(char) * my_strlen(src) + 1);

	if (str == NULL)
		return (NULL);
	else {
		my_strcpy(str, src);
		return (str);
	}
}
