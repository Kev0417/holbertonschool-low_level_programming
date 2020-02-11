#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: char to check
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x < 0)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d", x);
			}
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	} /* if n < 98 close */
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

