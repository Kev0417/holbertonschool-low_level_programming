#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;

	a = 1;
	b = 2;
	c = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			c += b;

		d = b;
		b += a;
		a = d;
	}
	printf("%d\n", c);
	return (0);
}
