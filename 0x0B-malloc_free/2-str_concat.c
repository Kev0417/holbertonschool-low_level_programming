#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, x, z;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	a = malloc(i + j * sizeof(char) + 2);
	if (a == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		a[x] = s1[x];

	z = 0;
	for (; x < i + j; x++, z++)
		a[x] = s2[z];

	return (a);
}
