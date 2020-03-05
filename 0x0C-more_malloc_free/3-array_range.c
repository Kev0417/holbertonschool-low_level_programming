#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *s, i;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));
	if (s == 0)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		s[i] = min;

	return (s);
}
