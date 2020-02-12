#include "holberton.h"
/**
 * print_times_table - This is a description :D.
 *
 * @n: int type number
 */
void print_times_table(int n)
{
	int a, b; /* size / multp */

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (a * b >= 100)
			{
				_putchar(a * b / 100 + '0');
				_putchar((a * b / 10 % 10) + '0');
				_putchar(a * b % 10 + '0');
			}
			else if (a * b >= 10)
			{
				_putchar(' ');
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');
			}
			else if (a * b <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(a * b + '0');
			}
			else
				_putchar(a * b + '0');

			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

