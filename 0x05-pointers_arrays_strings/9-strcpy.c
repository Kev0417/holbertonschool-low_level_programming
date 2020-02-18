#include "holberton.h"

/**
 * *_strcpy - copy src to dest
 * @dest: char to check
 * @src: char to check
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
