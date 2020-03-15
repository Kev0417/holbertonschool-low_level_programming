#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string != NULL)
		{
			printf("%s", string);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}

		else
			printf("(nil)");
	}

	printf("\n");

	va_end(list);
}
