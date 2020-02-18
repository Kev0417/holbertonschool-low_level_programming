#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print `n` elements of an array of integers
 * @a: set array
 * @n: set array size
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}

