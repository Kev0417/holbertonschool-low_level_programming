#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: Argv length
 * @argv: Arrays of array of characters
 * Return: Return 0
 */
int main(int argc, char **argv)
{
	char *result;

	(void) argv;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = argv[1] * argv[2];
	printf("%s\n", result);
	free(result);

	return (0);
}
