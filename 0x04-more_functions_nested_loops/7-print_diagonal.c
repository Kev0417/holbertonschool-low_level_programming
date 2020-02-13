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
		if (a != 0)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar(92);
			_putchar('\n');
			b = 0;
		}
	}
	_putchar('\n');
}
