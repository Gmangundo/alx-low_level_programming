#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The char to print
 * Return: 1 if successful else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
