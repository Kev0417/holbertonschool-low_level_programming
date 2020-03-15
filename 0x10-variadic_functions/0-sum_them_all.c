#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum;
	unsigned int i;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);

	va_end(list);

	return (sum);

}

