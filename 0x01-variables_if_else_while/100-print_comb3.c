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
n1 = '0';
n2 = '0';
while (n1 <= '8')
{
while (n2 <= '9')
{
if (n1 == n2)
{
n2++;
}
if (n1 > n2)
{
n2++;
continue;
}
putchar(n1);
putchar(n2);
if (n1 == '8' && n2 == '9')
{
break;
}
putchar(',');
putchar(' ');
n2++;
}
n2 = '0';
n1++;
}
putchar('\n');
return (0);
}
