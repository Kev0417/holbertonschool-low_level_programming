#include "holberton.h"

/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: char to check
 * @src: char to check
 * @n: char to check
 * Return: `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; src[b] != 0; b++)
	{
		if (b < n)
			dest[b] = src[b];
	}

	while (n > b)
	{
		dest[b] = 0;
		b++;
	}
	return (dest);

}
