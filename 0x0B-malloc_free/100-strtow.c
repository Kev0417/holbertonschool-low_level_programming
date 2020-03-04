#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - slpits a string into words.
 * @str: string
 * Return: Null if fail, else return pointer to new string
 */

char **strtow(char *str)
{
	int i, x;
	char *a;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != 0)
		i++;

	a = malloc(i * sizeof(char) + 1);

	if (a == 0)
		return (NULL);

	for (x = 0; x < i; x++)
		a[x] = str[x];

	return (a);
}

