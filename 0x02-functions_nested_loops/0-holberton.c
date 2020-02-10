#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "holberton";
	int b;

	b = 0;
	while (a[b] != 0)
	{
		_putchar(a[b]);
		b++;
	}
	putchar('\n');
	return (0);
}

