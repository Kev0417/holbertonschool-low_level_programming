#include "holberton.h"
/**
 * print_last_digit - Return 1 if letter is lowercase, 0 if not.
 * @r: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int print_last_digit(int r)
{
	int x;

	if (r < 0)
	{
		x = (r % 10) * -1;
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = (r % 10);
		_putchar(x + '0');
		return (x);
	}
}

