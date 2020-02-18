#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: char to check
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	while (a != 0)
	{
		_putchar(s[a - 1]);
		a--;
	}
	_putchar('\n');

}

