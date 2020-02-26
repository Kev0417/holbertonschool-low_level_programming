#include "holberton.h"
int magic_calculator(int x, int y);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (magic_calculator(n, 0.5));
}

/**
 * magic_calculator - it's magic!
 * @x: base
 * @y: power
 * Return: return magic
 */

int magic_calculator(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (magic_calculator(x, y + 1));
	else
		return (-1);

}

