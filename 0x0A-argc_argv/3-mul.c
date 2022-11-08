#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (success), 1 if false
 */

int main(int argc, char *argv[])
{
	int d, c;
	if (argc == 3)
	{
		d = atoi(argv[1]);
		c = atoi(argv[2]);
		printf("%d\n", d * c);
		return (0);
	}
	printf("Error\n");
	return (1);
}
