#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Return: `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++, n--)
		s[a] = b;

	return (s);
}
