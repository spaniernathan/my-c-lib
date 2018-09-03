/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#ifndef MY_INFO_
#define MY_INFO_

/* information gathering */

/* return 1 if nb < 0 || return 0 if nb >= 0 */
int my_isneg(int);

/* return the string length */
int my_strlen(char *);

/* return the nbr from a string */
int my_getnbr(char *);

/* return 1 if the string is an alpha character */
int my_str_isalpha(char *);

/* return 1 if the string is a numeric character */
int my_str_isnum(char *);

/* return 1 if the string is in lowcase */
int my_str_islower(char *);

/* return 1 if the string is in upcase */
int my_str_isupper(char *);

/* return 1 if the string is made of printable characters */
int my_str_isprintable(char *);

/* return the len of a number*/
int my_nbrlen(int nb);

char *get_next_line(int fd);
/* end information gathering */

#endif /* MY_INFO_ */
