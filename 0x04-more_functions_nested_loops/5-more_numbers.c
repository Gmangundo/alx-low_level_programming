#include "main.h"

/**
 * more_numbers - print out numbers from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int num, d;

	for (d = 0; d <= 9; d++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar ((num / 10) + '0');

			}
				_putchar((num % 10) + '0');
		}
	}
}
