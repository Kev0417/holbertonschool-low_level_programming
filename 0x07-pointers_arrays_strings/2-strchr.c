#include "holberton.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return:`c`
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			break;

		else if (*s == '\0')
			return (0);
	}
	return (s);
}

