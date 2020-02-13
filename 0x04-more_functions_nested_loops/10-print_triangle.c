#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - print a triangle.
 * @size : char to check
 * Return: a trinagle
 */
void print_triangle(int size)
{
	int a, b, c;

	c = size;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			c--;
			for (b = 0; b < size; b++)
			{
				if (c > b)
					_putchar(' ');

				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
