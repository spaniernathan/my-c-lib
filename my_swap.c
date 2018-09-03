/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swap two int
*/

void my_swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
