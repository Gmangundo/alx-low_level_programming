#include "main.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int b = 0;

	while (b < 10)
		_putchar(b++ + '0');
	_putchar('\n');
}	
