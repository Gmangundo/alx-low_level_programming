#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int y;

	while (c <= 98)
	{
		y = c + 1;
		while (y <= 99)
		{
			putchar(c / 10 % 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(y / 10 % 10 + '0');
			putchar(y % 10 + '0');
			if (c == 98 && y == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		c++;
	}
	return (0);
}
