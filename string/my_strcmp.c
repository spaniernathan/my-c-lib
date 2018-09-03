/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings
*/

int my_strcmp(char *s1, char *s2)
{
	int cmp = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0) {
		cmp = s1[i] - s2[i];
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
		cmp = s1[i] - s2[i];
	return (cmp);
}
