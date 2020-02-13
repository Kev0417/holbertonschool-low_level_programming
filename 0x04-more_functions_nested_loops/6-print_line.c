#include <stdio.h>
#include "holberton.h"

/**
 * print_line - print a straight..
 * @n: char to check
 * Return: numbers
 */
void print_line(int n)
{
	int i;

	while (i <= n)
	{
		if (i != 0)
			_putchar('_');

		i++;
	}
	_putchar('\n');
}
