#include "shell.h"

/**
 * _strcpy - Copy a string from src to dest.
 * @dest: The destination string where src will be copied to.
 * @src: The source string to copy from.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
