#include "holberton.h"

/**
 * puts_half - print second half of a string
 * @str: char to check
 *
 */

void puts_half(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;

	for (a = a / 2; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');

}
