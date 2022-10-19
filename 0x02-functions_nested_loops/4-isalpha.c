#include "main.h"

/**
 * _isalpha - checks for alphabet char
 * @c: is the char to check
 *
 * Return: (1) if c is low or upper case, (0) othewise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
