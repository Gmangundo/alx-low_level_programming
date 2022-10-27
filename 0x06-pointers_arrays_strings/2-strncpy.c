#include "main.h"

/**
 * _strncpy - functionthat copies two functions
 * @dest: copy to
 * @src: copy from
 * @n: numberof char to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
