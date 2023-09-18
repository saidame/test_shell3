#include "shell.h"

/**
 * read_command - Read a command from standard input.
 *
 * Return: A dynamically allocated string containing the command.
 *         NULL if an error occurs or end of input is reached.
 */
char *read_command(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	n = getline(&line, &len, stdin);

	if (n == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
