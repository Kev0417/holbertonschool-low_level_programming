#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charVar;
int intVar;
long int lintVar;
long long int llintVar;
float floatVar;
printf("Size of a char: %ld byte(s)\n", sizeof(charVar));
printf("Size of an int: %ld byte(s)\n", sizeof(intVar));
printf("Size of a long int: %ld byte(s)\n", sizeof(lintVar));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llintVar));
printf("Size of a float: %ld byte(s)\n", sizeof(floatVar));
return (0);
}
