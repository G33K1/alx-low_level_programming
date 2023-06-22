#include "main.h"

/**
 * _isupper - check for uppercase char
 * @c: char to be checked
 * Return:  always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
