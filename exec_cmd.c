#include "shell.h"

/**
 * exec_cmd - execute command
 * @cmd: command entered from keyboard 
*/

void exec_cmd(const char *cmd)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        _print("Error\n");
        exit(EXIT_FAILURE);
    }

    else if (child_pid == 0)
    {
	char *arg[12];
        int count = 0;

	char *token = strtok((char *)cmd, " ");
	while (token != NULL)
	{
		arg[count++] = token;
		token = strtok(NULL," ");
	}
	arg[count] = NULL;

	execvp(arg[0], arg);

	_print("Error\n");
        exit(EXIT_FAILURE);
    }

    else
        wait(NULL);
}
