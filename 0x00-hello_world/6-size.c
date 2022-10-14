#include <stdio.h>
/**
 * main -Entry
 * Return: Alwasy 0
 */
int main(void)
{
	char a;
	int b;
	long int;
	long long int d;
	float e;
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %is byte(s)\n", sizeof(float));
	return (0);
}
