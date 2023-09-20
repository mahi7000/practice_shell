#include "shell.h"

/**
 * _masetenv - Initialize a new environment variable,
 *             or modify an existing one
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: 0
 */
int _masetenv(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (ma_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * _maunsetenv - Remove an environment variable
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 * Return: 0
 */
int _maunsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		ma_eputs("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		ma_unsetenv(info, info->argv[i]);

	return (0);
}

/**
 * ma_ populate_env_list - populates env linked list
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: 0
 */
int ma_ populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	return (0);
}

