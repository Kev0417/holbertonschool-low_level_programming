#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *a, *b;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, total = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	b = a;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*a = av[x][y];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (b);
}
