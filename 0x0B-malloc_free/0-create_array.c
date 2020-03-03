#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	else
		b = malloc(size);

	if (b == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
			b[a] = c;
	}
	return (b);
}
