#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * without 2 and 4
 * Return: always 0
 */


void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');

		c++;
	}
	_putchar('\n');
}
