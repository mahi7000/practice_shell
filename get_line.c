#include "shell.h"

void get_line(char *cmd, size_t size)
{
    if (fgets(cmd, size, stdin) == NULL)
    {
        if (feof(stdin))
        {
            _print("\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            _print("Error\n");
            exit(EXIT_FAILURE);
        }
    }
    cmd[strcspn(cmd, "\n")] = '\0';
}
