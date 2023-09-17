#include "shell.h"

/**
 * _strtok - tokenize the string taken from shell
 * 
 * Return: 0
*/

int _strtok(void)
{
    char cmd[] = "Enter command here";
    char *token;
    char *delim = " ";

    token = strtok(cmd, delim);

    while (token != NULL)
    {
        printf("%s ", token);
        token = strtok(NULL, delim);
    }

    return (0);
}
