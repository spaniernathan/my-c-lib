/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my_string.h"

int count_word(char *str)
{
	int nb = 0;
	int i = 0;

	while (str[i]) {
		if ((str[i] != ' ' || str[i] != '\n' || str[i] != '\t') &&
			(str[i + 1] == ' ' || str[i + 1] == '\n' ||
			str[i + 1] == '\t' || str[i + 1] == '\0'))
			nb++;
		i++;
	}
	return (nb);
}

int next_word_len(char *str, int *len, int *pos)
{
	static int i = 0;

	(*len) = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
		if (str[i] == '\0') {
			i = 0;
			break;
		}
		i++;
		(*pos)++;
	}
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
		if (str[i] == '\0') {
			i = 0;
			break;
		}
		(*len)++;
		i++;
		(*pos)++;
	}
	return (*len);
}

char **fill_array(char **word_array, char *str)
{
	int len = 0;
	int pos = 0;

	for (int i = 0; i < count_word(str); i++) {
		word_array[i] = malloc(sizeof(char) * (next_word_len(str, &len, &pos)
			+ 1));
		for (int y = 0; y < len; y++)
			word_array[i][y] = str[pos - len + y];
		word_array[i][len] = '\0';
	}
	word_array[count_word(str)] = NULL;
	return (word_array);
}

char **my_str_to_word_array(char *str)
{
	char **word_array = malloc(sizeof(char *) * (count_word(str) + 1));

	word_array = fill_array(word_array, str);
	return (word_array);
}
