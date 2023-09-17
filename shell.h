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

#endif
