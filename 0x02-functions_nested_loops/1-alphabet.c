#include "main.h"

/**
 * print_alphabet - print all the alphabet in lowercase
 */
void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		_putchar(word);

	_putchar('\n');
}
