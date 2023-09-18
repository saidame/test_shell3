#include "shell.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
