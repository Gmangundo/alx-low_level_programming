#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: num of char to copy
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;
	int p;

	i = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	while (p < n && src[p] != '\0')
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	dest[o] = '\0';
	return (dest);
}
