#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of array integers
 * @a: array
 * @n: num of values to print
 */
void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		printf("%d", a[u]);
		if (u != n - 1)
			printf(", ");
	}

	printf("\n");
}
