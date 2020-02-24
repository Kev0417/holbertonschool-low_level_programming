#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++, n--)
		dest[a] = src[a];

	return (dest);
}

