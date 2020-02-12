#include <stdio.h>
/**
 * main - main block
 *
 *
 * Return: 0
 */
int main(void)
{
	int a = 2;
	long int b1 = 1, b2 = 2;
	long int c;

	printf("%lu, ", b1);
	while (a <= 50)
	{
		if (a == 50)
		{
			printf("%lu\n", b2);
		}
		else
		{
			printf("%lu, ", b2);
		}

		c = b2;
		b2 += b1;
		b1 = c;
		a++;
	}

	return (0);
}