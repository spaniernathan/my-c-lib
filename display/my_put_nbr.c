/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** print a number
*/

#include "../include/my_display.h"

void my_put_nbr(int nb)
{
	int	var;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10) {
		var = nb % 10;
		nb = (nb - var) / 10;
		my_put_nbr(nb);
		my_putchar(48 + var);
	}
	else {
		my_putchar(48 + nb);
	}
}