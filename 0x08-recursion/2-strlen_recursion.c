#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to check
 * Return: a
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
		a = 1 + _strlen_recursion(s + 1);

	else
		return (0);

	return (a);
}
