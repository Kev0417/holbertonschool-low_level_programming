#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
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

