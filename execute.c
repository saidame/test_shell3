#include "shell.h"

/**
 * _execute - Execute a command.
 * @command: An array of command arguments.
 * @argv: The program arguments.
 * @idx: The index of the command.
 *
 * Return: The exit status of the executed command.
 */
int _execute(char **command, char **argv, int idx)
{
	char *full_cmd;
	pid_t child;
	int status;

	full_cmd = _getpath(command[0]);
	if (!full_cmd)
	{
		printerror(argv[0], command[0], idx);
		freearray2D(command);
		return (127);
	}

	child = fork();
	if (child == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			free(full_cmd), full_cmd = NULL;
			freearray2D(command);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearray2D(command);
		free(full_cmd), full_cmd = NULL;
	}
	return (WEXITSTATUS(status));
}
