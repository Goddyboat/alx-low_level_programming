#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a; int n)
{
	int i;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (nn - 1))
			printf(", ");
	}
	printf("\n");
}
