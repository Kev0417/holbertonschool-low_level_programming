#include "holberton.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string to check
 * Return: `s`
 */

char *rot13(char *s)
{
	int a;
	int b;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char N[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; A[b] != '\0'; b++)
		{
			if (s[a] == A[b])
			{
				s[a] = N[b];
				break;
			}
		}
	}
	return (s);
}
