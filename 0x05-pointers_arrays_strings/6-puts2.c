#include "main.h"

/**
 * puts2 - prints other char of a string from line one
 * @str: string to be used
 * Return: print
 */
void puts2(char *str)
{
	int p = 0;

	for (; str[p] != '\0'; p++)
	{
		if ((p % 2) == 0)
			_putchar(str[p]);
		else
			continue;
	}
	_putchar('\n');
}
