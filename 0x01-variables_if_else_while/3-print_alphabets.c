#include <stdio.h>

/**
 * main - entry point
 * void - empty
 * Return: 0
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
