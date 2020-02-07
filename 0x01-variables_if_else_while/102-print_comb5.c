#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1, n2, n3, n4;
n1 = '0';
n2 = '0';
n3 = '0';
n4 = '0';
while (n1 <= '9')
	{
	while (n2 <= '9')
		{
		while (n3 <= '9')
			{
			while (n4 <= '9')
				{
					if (n1 > n3 || n2 > n4)
						{
							n4++;
							continue;
						}
					if (n1 == n3 && n2 == n4)
						{
							n4++;
							continue;
						}
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
						break;
					putchar(',');
					putchar(' ');
					n4++;
				}
				n4 = '0';
				n3++;
			}
			n3 = '0';
			n2++;
		}
	n2 = '0';
	n1++;
	}
putchar('\n');
return (0);
}
