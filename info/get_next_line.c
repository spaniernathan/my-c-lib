/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my_info.h"
#include "../include/my_string.h"

char *my_read(int fd, int *nb_bytes_read)
{
	char *buffer = malloc(sizeof(char) * 2);

	(*nb_bytes_read) = read(fd, buffer, 1);
	buffer[(*nb_bytes_read)] = '\0';
	return (my_strdup(buffer));
}

char *my_realloc_strcat(char *str, char *str2)
{
	char *temp = my_strdup(str);
	char *temp2 = my_strdup(str2);
	char *new_str = NULL;

	new_str = malloc(sizeof(char) * my_strlen(str) + my_strlen(str2) + 1);
	for (int i = 0; temp[i]; i++)
		new_str[i] = temp[i];
	for (int y = 0; temp2[y]; y++)
		new_str[my_strlen(str) + y] = temp2[y];
	new_str[my_strlen(str) + my_strlen(str2)] = '\0';
	return (new_str);
}

char *remove_line_return(char *line)
{
	int len = my_strlen(line);
	char *new_line = malloc(sizeof(char) * len);

	for (int i = 0; i < len - 1; i++)
		new_line[i] = line[i];
	new_line[len - 1] = '\0';
	free(line);
	return (new_line);
}

char *get_next_line(int fd)
{
	int i = 0;
	int nb_bytes_read = 0;
	char *new_line = my_read(fd, &nb_bytes_read);

	while (new_line[i] != '\n') {
		if (new_line[i] == '\0')
			i = 0;
		new_line = my_realloc_strcat(new_line, my_read(fd, &nb_bytes_read));
		if (nb_bytes_read == 0)
			return (NULL);
		i++;
	}
	new_line = remove_line_return(new_line);
	return (new_line);
}
