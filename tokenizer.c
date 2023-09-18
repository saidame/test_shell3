#include "shell.h"

/**
 * tokenizer - Tokenize a string.
 * @line: The input string to tokenize.
 *
 * Return: An array of tokens extracted from the input string.
 */
char **tokenizer(char *line)
{
	char *token = NULL, *tmp = NULL;
	char **command = NULL;
	int cpt = 0, i = 0;

	if (!line)
		return (NULL);
	tmp = _strdup(line);

	token = strtok(tmp, DELIM);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	while (token)
	{
		cpt++;
		token = strtok(NULL, DELIM);
	}
	free(tmp);
	command = malloc(sizeof(char *) * (cpt + 1));
	if (!command)
	{
		free(line), line = NULL;
		return (NULL);
	}

	token = strtok(line, DELIM);

	while (token)
	{
		command[i] = strdup(token);
		token = strtok(NULL, DELIM);
		i++;
	}
	free(line), line = NULL;
	command[i] = NULL;
	return (command);
}
