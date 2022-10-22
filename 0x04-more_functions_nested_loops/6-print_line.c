#include "main.h"

/**
 * print_line - print a straight line
 * @n: the number of '_' to print
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
			_putchar('_');
	}

	_putchar('\n');
}
