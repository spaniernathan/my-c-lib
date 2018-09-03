/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** check is the string is in lowcase
*/

int my_str_islower(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] < 97 || str[i] > 122)
			j++;
		i++;
	}
	if (j == 0 || i == 0)
		return (1);
	else
		return (0);
}
