#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1;
int n2;
int n3;
n1 = '0';
n2 = '0';
n3 = '0';
while (n1 <= '7')
	{
	while (n2 <= '8')
		{
		while (n3 <= '9')
			{
			if (n1 == n2 || n1 == n3 || n2 == n3)
				{
				n3++;
				continue;
				}
			if (n1 > n2 || n1 > n3)
				{
				n3++;
				continue;
				}
			putchar(n1);
			putchar(n2);
			putchar(n3);
			n3++;
			if (n1 == '7')
				{
				continue;
				}
			putchar(',');
			putchar(' ');
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
