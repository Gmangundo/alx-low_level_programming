#include <stdio.h>
#include "main.h"

/**
 * main - prints name if program
 * @argc: Count arrguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv,/*ignore argv*/
		printf("%i\n",argc - 1);
	
	return(0);
}
