/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** return 1 if the string is an alpha character
*/

int my_str_isalpha(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			j++;
		i++;
	}
	if (j == 0 || i == 0)
		return (1);
	else
		return (0);
}
