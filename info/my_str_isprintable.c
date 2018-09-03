/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** check if the string is made of printable characters
*/

int my_str_isprintable(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] > 126)
			j++;
		i++;
	}
	if (j == 0 || i == 0)
		return (1);
	else
		return (0);
}
