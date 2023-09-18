#include "shell.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string where src will be appended.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = *src;
	return (dest);
}
