#include "main.h"

/**
 * _puts_recursion - print a new line followed by new ine
 *@s: value to print
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	if (!*s)
	_putchar('\n');
}
