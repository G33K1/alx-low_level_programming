#include "main.h"

/**
 * print - print alphabet 10 times
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
