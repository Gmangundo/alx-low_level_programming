#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: num of char to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;
	int p;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	dest[o] = '\0';
	return (dest);
}
