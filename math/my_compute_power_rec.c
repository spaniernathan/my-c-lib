/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** make the power of a number by another
*/

#include "../include/my_math.h"

int my_pow(int nb, int p)
{
	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	if (p > 0) {
		nb = nb * my_pow(nb, p - 1);
		return (nb);
	}
	else
		return (0);
}
