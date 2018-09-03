/*
** EPITECH PROJECT, 2017
** Day08
** File description:
** my_show_word_array
*/

#include "../include/my_display.h"

void my_show_word_array(char **tab)
{
	for (int i = 0; tab[i]; i++) {
		my_putstr(tab[i]);
		my_putchar('\n');
	}
}
