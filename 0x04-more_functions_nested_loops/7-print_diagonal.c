#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: the number of '\' to print
 */

void print_diagonal(int n)
{int num;

	if (n > 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar ('\\');
		_putchar ('\n');
	}
}
