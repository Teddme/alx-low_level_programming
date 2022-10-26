#include "main.h"

/**
 * swap_int - swaps numbers
 * @a: 1st int
 * @b: 2nd int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
