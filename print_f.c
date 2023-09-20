#include "shell.h"

/**
 * _print - This is a printf for shell
 * @string: string 
 */

void _print(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
