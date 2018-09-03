/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#ifndef MY_MATH_
#define MY_MATH_

/* my_math */

/* return a nb to power */
int my_pow(int, int);

/* return the square root of a nb */
int my_sqrt(int);

/* return 1 if the number is a prime number */
int my_is_prime(int);

/* find the first occurence of a prime number */
int my_find_prime_sup(int);

/* return the convertion of an int to a base from 2 to 36 */
char *my_convert_base(int nbr, char *);

/* return the convertion of an int to a base from 2 to 36 in lowcase */
char *my_convert_base_lowercase(int nbr, char *);

/* return the convertion of an unsigned int to a base from 2 to 36 */
char *my_unsigned_base(unsigned int nbr, char *, int *);

/* return the convertion of an unsigned int to a base from 2 to 36 in lowcase*/
char *my_unsigned_lowcase_base(unsigned int nbr, char *, int *);

/* end my_math */

#endif /* MY_MATH_ */