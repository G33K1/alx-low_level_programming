#include "main.h"

/**
 * _islower - check for lowercase char
 *
 * Return - always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
