#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int p;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[t] = src[p];
		t++;
		p++;
	}
	dest[t] = '\0';
	return (dest);
}
