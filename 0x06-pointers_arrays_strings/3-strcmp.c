#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int u;

	u = 0;
	while (s1[u] != '\0' && s2[u] != '\0')
	{
		if (s1[u] != s2[u])
		{
			return (s1[u] - s2[u]);
		}
	u++;
	}
	return (0);
}
