#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: char to check
 * @n: char to check
 */
void reverse_array(int *a, int n)
{
	{
		int c, b;

		for (c = 0; c < (n / 2); c++)
		{
			b = a[c];
			a[c] = a[n - c - 1];
			a[n - c - 1] = b;
		}
	}
}
