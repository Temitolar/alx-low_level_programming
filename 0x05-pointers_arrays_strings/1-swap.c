#include <stdio.h>

/**
 * swap_int - swaps the vakues of two integers
 * @a: the first integer to be swapped
 * @b: the sexond integer to be swapped
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
/* the fubction tgat swaps the value of two integers. */
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
