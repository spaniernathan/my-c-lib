/*
** EPITECH PROJECT, 2017
** my_is_prime_sup
** File description:
** find the first occurence of a prime number
*/

#include "../include/my_math.h"

int my_find_prime_sup(int nb)
{
	if (my_is_prime(nb) == 1)
		return (nb);
	while (my_is_prime(nb) != 1)
		nb++;
	return (nb);
}
