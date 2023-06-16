#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = 0;
	if (n < b)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	else if (n == b)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	else
	{
		printf("%d is positive", n);
		return (0);
	}
	/* your code goes there */
	return (0);
}
