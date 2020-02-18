#include <stdio.h>

/**
 * reset_to_98 - change the value of n.
 * @n : char to check
 *
 */
void reset_to_98(int *n)
{
	int a;

	a = *n;
	a = 98;
	*n = a;
}
