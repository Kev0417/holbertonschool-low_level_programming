#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - check for upper case letters..
 * @c : char to check
 * Return: Always 1 if upper.
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}