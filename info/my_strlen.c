/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** find the lenght of a string given as parameter
*/

int	my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
