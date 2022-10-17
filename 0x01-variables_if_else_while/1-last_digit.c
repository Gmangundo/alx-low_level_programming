#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - working
 *
 * Return: 0
 */
int main(void)
{	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	g = n % 10;
	printf("last digit of %d is %d ", n, g);
	if  (g > 5)
	{
		printf("and is greater than 5");
	}
	if (g == 0)
	{
		printf("and is 0");
	}
	if (g < 6 && x != 0)
	{
		printf("and is less than and not 0");
	}
	printf("\n")
	return (0);
}
