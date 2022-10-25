#include "main.h"

/**
 * rev_string -function that reverses a string
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int r = 0;
	int p;

	while (s[r] != '\0')
		r++;
	for (p = 0; p < r; p++)
	{
		r--;
		rv = s[p];
		s[p] = s[r];
		s[r] = rv;
	}
}
