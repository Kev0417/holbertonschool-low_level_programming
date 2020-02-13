#include <stdio.h>

/**
 * _isdigit - check if the char is a number.
 * @c : char to check
 * Return: 1 if succes
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
