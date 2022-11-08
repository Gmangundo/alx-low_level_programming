#include <stdio.h>
#include "main.h"

/**
 * main - prints name if program
 * @argc: Count arrguments
 * @argv: Arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv,/*Ignore argv*/
		printf("%i\n", argc - 1);
	return (0);
}
