#include "holberton.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
		}
	}

	return (0);
}
