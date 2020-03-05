#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s15: string 1
 * @s32: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, y, i, j, z;
	unsigned int b;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; x < s1[x]; x++)
		;
	for (y = 0, b = 0; y < s2[y]; y++, b++)
		;
	if (n >= b)
		n = y;
	a = malloc(x + n + 1);
	if (a == 0)
		return(NULL);
	z = n;
	for (i = 0; i < x; i++)
		a[i] = s1[i];
	for (j = 0; i < x + z; j++, i++)
		a[i] = s2[j];
	a[i] = '\0';
	return(a);
}
