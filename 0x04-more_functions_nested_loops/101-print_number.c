#include "holberton.h"
/**
 * print_number - print an integer.
 * @n: int to check
 * return :
 */

void print_number(int n)
{
	int a, b, c;

	a = n;
	if (a < 0)
	{
		a = a * -1;
		_putchar('-');
	}

	b = 1;
	c = 1;
	while (c)
	{
		if (a / (b * 10) > 0)
			b = b * 10;
		else
			c = 0;
	}

	while (a >= 0)
	{
		if (b == 1)
		{
			_putchar(a % 10 + '0');
			a = -1;
		}
		else
		{
			_putchar((a / b % 10) + '0');
			b = b / 10;
		}
	}
}
