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
			return (s);

		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}

