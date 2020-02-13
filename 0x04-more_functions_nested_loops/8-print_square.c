#include <stdio.h>
#include "holberton.h"

/**
 * print_square - print a square.
 * @size : char to check
 * Return: numbers
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
