#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((b * a) >= 10)
			{
				_putchar((b * a) / 10 + '0');
				_putchar((b * a) % 10 + '0');
			}
			else
			{
				_putchar(b * a + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
