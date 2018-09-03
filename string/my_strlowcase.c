/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** put the string in lowcase
*/

char *my_strlowcase(char *str)
{
	for (int i = 0; str[i]; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}
