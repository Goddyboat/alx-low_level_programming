#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers
 * @a: First arguments to be swapped.
 * @b: second arguments to be swapped.
 *
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
