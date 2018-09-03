/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** put a string in upcase
*/

char *my_strupcase(char *str)
{
	for (int i = 0; str[i]; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
