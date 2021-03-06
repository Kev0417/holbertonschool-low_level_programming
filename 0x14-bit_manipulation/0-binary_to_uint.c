#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, dup;
	int i;

	if (b == NULL)
		return (0);

	total = 0;
	dup = 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i--; i >= 0; i--, dup *= 2)
	{
		if (b[i] == '1')
			total += dup;
	}
	return (total);
}

