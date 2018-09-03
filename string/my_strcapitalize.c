/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** Capitalise the sting given as parameter
*/

int is_lowcase(char c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}

int is_alpha(char c)
{
	if ((c < 48 || c > 57) && (c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	else
		return (1);
}

int is_upcase(char c)
{
	if (c < 48 || c > 90)
		return (0);
	else
		return (1);
}

char *my_strcapitalize(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (is_lowcase(str[i]) == 1 && is_alpha(str[i - 1]) == 0)
			str[i] = str[i] - 32;
		else if (is_upcase(str[i]) == 1)
			 str[i] = str[i] + 32;
	}
	return (str);
}
