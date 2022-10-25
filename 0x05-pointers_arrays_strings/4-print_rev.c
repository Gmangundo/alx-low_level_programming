#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
		p++;
	for (p = p - 1; p >= 0; p--)
		_putchar(s[p]);

	_putchr('\n');
}
