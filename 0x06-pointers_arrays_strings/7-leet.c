#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: string to check
 * Return: `s`
 */

char *leet(char *s)
{
	int a;
	int b;
	char A[] = "aeotlAEOTL";
	char N[] = "4307143071";

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; A[b] != '\0'; b++)
		{
			if (s[a] == A[b])
			{
				s[a] = N[b];
			}
		}
	}
	return (s);
}
