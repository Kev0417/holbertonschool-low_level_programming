#include <ctype.h>

/**
 * _isupper - check for upper case letters..
 * @c : char to check
 * Return: Always 1 if upper.
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);

	else
		return (0);
}

