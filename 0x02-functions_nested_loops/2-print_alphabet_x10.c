#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int list = 0;
	char word;

	while (list++ <= 9)
	{
		for (word = 'a'; word <= 'z'; word++)
			_putchar(word);
		_putchar('/n');
	}
