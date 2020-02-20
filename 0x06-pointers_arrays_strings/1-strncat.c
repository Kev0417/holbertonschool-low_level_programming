#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: char to check
 * Return: 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != 0; b++)
	{
		if (b < n)
			dest[a] = src[b];

		++a;
	}

	return (dest);
}

