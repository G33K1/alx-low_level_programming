#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Declaration: declare a string var
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
