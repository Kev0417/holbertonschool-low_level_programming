#include <stdio.h>

/**
 * swap_int - change the value of n.
 * @a : char to check
 *@b : char to check
 */

void swap_int(int *a, int *b)
{
	int x, y, z;

	x = *a;
	y = *b;
	z = x;
	x = y;
	y = z;
	*a = x;
	*b = y;

}
