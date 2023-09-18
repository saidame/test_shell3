#include "shell.h"

/**
* main - main function
* @ac: Count pf argumnents
* @av: Arguments
* Return: 0 Always (success).
*/
int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status, idx = 0;
	(void) ac;

	while (1)
	{
		line = read_command();
		if (line == NULL) /* end of file ctrl + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
		return (status);
		}
		idx++;
		command = tokenizer(line);
		if (!command)
			continue;
		status = _execute(command, argv, idx);
	}
}
