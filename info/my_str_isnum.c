/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** check if the string is a number
*/

int my_str_isnum(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] < '9' || str[i] > '0')
			j++;
		i++;
	}
	if (j == 0 || i == 0)
		return (1);
	else
		return (0);
}
