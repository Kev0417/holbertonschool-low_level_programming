#include "holberton.h"
/**
 * print_alphabet_x10 - this is a description :)
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	n = 'a';
	i = '0';
	while (i <= '9')
	{
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		n = 'a';
		i++;
	}
}
