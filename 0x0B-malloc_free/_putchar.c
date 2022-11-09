#include <unistd.h>

/**
 * _putchar - wites the cahracter of f to stdout
 * @c: the character to print
 *
 * Return: if true 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
