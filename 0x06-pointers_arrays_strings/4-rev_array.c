#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * Return: rev
 * ?
 */
void reverse_array(int *a, int n)
{
	int r;
	int g;


	for (r = 0; r < n; r++)
	{
		n--;
		g = a[r];
		a[r] = a[r];
		a[n] = g;
	}
}
