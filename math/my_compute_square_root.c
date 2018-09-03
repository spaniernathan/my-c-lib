/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** make the square root of a number
*/

int my_sqrt(int nb)
{
	int i = 1;
	while (i * i < nb) {
		i++;
	}
	if (i * i != nb)
		return (0);
	return (i);
}
