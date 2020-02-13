#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - print a slash at the end of the line..
 * @n : char to check
 * Return: numbers
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		if (n > 0)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n < 1)
		_putchar('\n');
}
