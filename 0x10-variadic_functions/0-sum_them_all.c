#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, unsigned int);

	va_end(valist);

	return (sum);
}
