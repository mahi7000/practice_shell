#include "shell.h"

/**
 * main - envoke shell
 * 
 * Return: 0
*/

int main(void)
{
    char cmd[12];

    while (1)
    {
        _print("$ ");
        get_line(cmd, sizeof(cmd));
        exec_cmd(cmd);
    }

    return (0);
}
