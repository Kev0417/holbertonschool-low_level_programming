#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - print char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - print string element from va_list
 * @list: va_list passed to function
 */
void print_str(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_int - print int type element from va_list
 * @list: va_list passed to function
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print float type element from va_list
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";

	va_list list;

	data data[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};
	va_start(list, format);

	while (format != NULL && *(format + j) != '\0')
	{
		while (i < 4)
		{
			if (data[i].type[0] == format[j])
			{
				data[i].f(list, separator);
				separator = ", ";
			}
			i++;
		}
		j++, i = 0;
	}
	va_end(list);
	printf("\n");
}

