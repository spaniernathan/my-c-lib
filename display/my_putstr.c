/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** ###
*/

#include "../include/my_display.h"

void my_putstr(char *str)
{
	for (int i = 0; str[i]; i++)
		my_putchar(str[i]);
}
