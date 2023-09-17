#include "shell.h"

void _print(const char *string)
{
    write(STDOUT_FILENO, string, strlen(string));
}
