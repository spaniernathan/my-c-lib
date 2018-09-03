/*
** EPITECH PROJECT, 2017
** mysh
** File description:
** mysh
*/

#ifndef _STRUCTS_H_
#define _STRUCTS_H_

typedef struct env_t
{
	char *elem;
	struct env_t *next;
}env_st;

int free_list(env_st **list);
int put_in_list(env_st **list, char *elem);

void my_setenv(env_st **list, char **param);
void my_unsetenv(env_st **list, char **param);
void my_env(env_st **list);
void change_directory(env_st **env_t);
void exit_program(env_st **env_t);
char *my_getenv(env_st **env_t, char *path);

#endif /* _STRUCTS_H_ */