#include <unistd.h>

/**
 * _putchar -  writes the cahracter c to stdout
 * @c: The cahracter to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
