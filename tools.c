#include "shell.h"

/**
 * freearray2D - Free a 2D array and set its elements to NULL.
 * @arr: The 2D array to free.
 */
void freearray2D(char **arr)
{
	int i;

	if (!arr)
		return;

	for (i = 0; arr[i]; i++)
	{
		free(arr[i]);
		arr[i] = NULL;
	}

	free(arr);
	arr = NULL;
}

/**
 * printerror - Print an error message to the standard error.
 * @name: The program name or identifier.
 * @cmd: The command that caused the error.
 * @idx: The index of the error.
 */
void printerror(char *name, char *cmd, int idx)
{
	char *index, msg[] = ": not found";

	index = _itoa(idx);

	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, msg, _strlen(msg));

	free(index);
}

/**
 * _itoa - Convert an integer to a string.
 * @n: The integer to convert.
 *
 * Return: A pointer to the string representation of the integer.
 */
char *_itoa(int n)
{
	char buffer[20];
	int i = 0;

	if (n == 0)
		buffer[i++] = '0';
	else
	{
		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
	}

	buffer[i] = '\0';
	reverse_str(buffer, i);

	return (_strdup(buffer));
}

/**
 * reverse_str - Reverse a string in-place.
 * @str: The string to reverse.
 * @len: The length of the string.
 */
void reverse_str(char *str, int len)
{
	char tmp;
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}
