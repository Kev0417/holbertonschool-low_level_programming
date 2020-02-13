#include <stdio.h>

/**
 * _isupper - check for upper case letters..
 * @c : char to check
 * Return: Always 1 if upper.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);

	else
		return (0);
}

