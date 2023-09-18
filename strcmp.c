#include "shell.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			(return -1);
		}
		else if (*s1 > *s2)
		{
			(return 1);
		}
		s1++;
		s2++;
	}
	(return 0);
}
