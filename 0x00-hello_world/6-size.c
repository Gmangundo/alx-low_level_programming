#include <stdio.h>
/**
 * main -Entry
 * Return: Alwasy 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %ibyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ibyte(s)\n", sizeof(long long int));
	return (0);
}
