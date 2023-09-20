#ifndef SHELL_H
#define SHELL_H

/**
 * header files
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
 * wait
 */

#include <sys/types.h>
#include <sys/wait.h>

/**
 * prototypes
*/

void _print(const char *string);
void exec_cmd(const char *cmd);
void get_line(char *cmd, size_t size);


int ma_atoi(char *s);
int ma_interactive(info_t *info);
int ma_isalpha(int c);
int ma_delim(char c, char *delim);
int _maenv(info_t *info);
char *ma_getenv(info_t *info, const char *name);
int ma_populate_env_list(info_t *info);
int _maunsetenv(info_t *info);
int _mysetenv(info_t *info);
void ma_eputs(char *str);
int ma_eputchar(char c);
int ma_putfd(char c, int fd);
int ma_putsfd(char *str, int fd);
char *ma_strncpy(char *dest, char *src, int n);
char *ma_strncat(char *dest, char *src, int n);
char *ma_strchr(char *s, char c);


#endif
