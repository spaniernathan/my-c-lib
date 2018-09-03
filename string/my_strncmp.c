/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** compare n character of two strings
*/

int my_strncmp(char *s1, char *s2, int n)
{
	int cmp = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0 && i < n) {
		cmp = s1[i] - s2[i];
		i++;
	}
	if ((s1[i] == '\0' || s2[i] == '\0') && i < n)
		cmp = s1[i] - s2[i];
	return (cmp);
}
