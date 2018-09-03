/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** check if the string is in upcase
*/

int my_str_isupper(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] < 65 || str[i] > 90)
			j++;
		i++;
	}
	if (j == 0 || i == 0)
		return (1);
	else
		return (0);
}
