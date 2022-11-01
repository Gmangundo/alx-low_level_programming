#include "main.h"

/**
 * _memset - fill a meory with a specific value
 * @s: starting of the address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array  with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p;

	for (n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
