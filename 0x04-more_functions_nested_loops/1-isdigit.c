#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: number to check
 *
 * Return: always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
