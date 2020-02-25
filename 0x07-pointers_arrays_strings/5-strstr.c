#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @h: string
 * @n: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *h, char *n)
{
	int a, b;

	b = 0;

	if (h == NULL || n == NULL)
		return (0);

	for (; *h != '\0'; h++)
	{
		for (a = 0; *(n + a) != '\0'; a++)
		{
			if (*h == n[a])
			{
				b++;
			}
			else if (*h == '\0')
			{
				return (NULL);
			}
		}
	}
}
