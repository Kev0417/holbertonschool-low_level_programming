#include "holberton.h"

/**
 * *_strcat - print a string in reverse
 * @*dest: char to check
 * @*src: char to check
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		++a;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}


	return (dest);
}