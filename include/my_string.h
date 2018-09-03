/*
** EPITECH PROJECT, 2017
** ###
** File description:
** ###
*/

#ifndef MY_STRING_
#define MY_STRING_

/* string manipulations */

/* copy a string */
char *my_strcpy(char *, char *);

/* copy 'n' character of a string */
char *my_strncpy(char *, char *, int);

/* reverse a string */
char *my_revstr(char *);

/* return a pointer to the match in string */
char *my_strstr(char *, char *);

/* compare two strings / return 0 if both str are same */
int my_strcmp(char *, char *);

/* compare n characters of two strings / return 0 if both str are same */
int my_strncmp(char *, char *, int);

/* put a string in upcase */
char *my_strupcase(char *);

/* put a string in lowcase */
char *my_strlowcase(char *);

/* Capitalise the sting given as parameter */
char *my_strcapitalize(char *);

/* concat 2 strings */
char *my_strcat(char *, char *);

/* concat n char of 2 strings */
char *my_strncat(char *, char *, int nb);

/* duplicate 2 strings */
char *my_strdup(char *);

/* put a string to a word array */
char **my_str_to_word_array(char *);

/* end string manipulations */

#endif /* MY_STRING_ */