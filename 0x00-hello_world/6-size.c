#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print size of data types
 *
 * Return: always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %2d byte(s)", sizeof(char));
	printf("Size of an Int: %2d byte(s)", sizeof(int));
	printf("Size of a long int: %2d byte(s)", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)", sizeof(long long int));
	printf("Size of a float: %2d byte(s)", sizeof(float));
	return (0);
}
