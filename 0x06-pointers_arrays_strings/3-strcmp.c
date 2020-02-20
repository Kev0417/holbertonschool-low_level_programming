#include "holberton.h"

/**
 * _strcmp - Copy a string starting from index 0 of `dest`.
 * @s1: char to check
 * @s2: char to check
 * Return: `dest`
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != 0 && s2[a] != 0; a++)
	{
		if (s1[a] != s2[a])
			break;

	}
	return (s1[a] - s2[a]);
}
