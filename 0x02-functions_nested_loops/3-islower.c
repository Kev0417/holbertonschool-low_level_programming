#include "holberton.h"
/**
 * _islower - this is a description :)
 * @c: character to print
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
