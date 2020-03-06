#include <stdio.h>
#include <stdlib.h>

/**
 * _isNum - checks if it is fully a number
 * @num: string to check
 * Return: 1 if all num 0 if not
 **/

int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}


/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{
	(void) argc;


	if (argc != 3 || !(_isNum(argv[1])) || !(_isNum(argv[2])))
	{
		puts("Error");
		exit(98);
	}

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
