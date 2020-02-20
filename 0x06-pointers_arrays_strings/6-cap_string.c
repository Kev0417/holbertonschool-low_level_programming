#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @s: char to check
 * Return: `s`
 */

char *cap_string(char *s)
{
	int a, b;
	char x[];

	x[] = {',', '.', ';', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; x[b] != 0; b++)
		{
			if (s[a] == x[b])
			{
				a++;
				if (s[a] > 96 && s[a] < 123)
					s[a] -= 32;
			}
		}
	}

	return (s);
}

