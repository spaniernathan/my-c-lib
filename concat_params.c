/*
** EPITECH PROJECT, 2017
** Day08
** File description:
** concat_params
*/

#include <stdlib.h>
#include "../include/my_string.h"
#include "../include/my_info.h"

char *concat_params(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	int total_size = 0;
	char *new_str;

	while (k < argc) {
		total_size = total_size + my_strlen(argv[k]) + 1;
		k++;
	}
	new_str = malloc(sizeof(char) * total_size + 1);
	new_str[0] = '\0';
	new_str = my_strcat(new_str, argv[i]);
	new_str = my_strcat(new_str, "\n");
	for (i = 1; i < argc; i++) {
		new_str = my_strcat(new_str, argv[i]);
		new_str = my_strcat(new_str, "\n");
	}
	new_str = my_strcat(new_str, "\n");
	return (new_str);
}
