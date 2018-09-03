/*
** EPITECH PROJECT, 2017
** my_nbrlen
** File description:
** return the len of the number given as param
*/

int my_nbrlen(int nb)
{
	int len = 0;

	while (nb > 0) {
		nb /= 10;
		len++;
	}
	return (len);
}
