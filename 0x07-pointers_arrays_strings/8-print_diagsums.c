#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int x, sum, sizer;

	sum = 0;
	sizer = size * size;
	for (x = 0; x < sizer; x++)
	{
		if (x % (size + 1) == 0)
			sum += a[x];
	}
	printf("%d, ", sum);

	sum = 0;
	for (x = 0; x < sizer; x++)
	{
		if (x % (size - 1) == 0 && x != (sizer - 1) && x != 0)
			sum += a[x];
	}
	printf("%d\n", sum);
}
