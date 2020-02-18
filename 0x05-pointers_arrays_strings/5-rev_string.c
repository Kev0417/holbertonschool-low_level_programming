#include "holberton.h"

/**
 * rev_string - print a string in reverse
 * @s: char to check
 */

void rev_string(char *s)
{
	int a, b, c;
	char d;

	a = 0;
	while (s[a] != '\0')
		a++;

	c = a;
	for (a--, b = 0; b < c / 2; a--, b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
	}
}
