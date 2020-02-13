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

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
