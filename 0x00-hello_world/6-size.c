#include <stdio.h>

/**
 * main - entry point
 *
 * description: print size of data types
 *
 * return: always 0 (success)
 */

int main(void)
{
	printf("Size of char: %2d bytes \n", sizeof(char));
	printf("Size of Int: %2d bytes \n", sizeof(int));
	printf("Size of long int: %2d bytes \n", sizeof(long int));
	printf("Size of long long int: %2d bytes \n", sizeof(long long int));
	printf("Size of float: %2d bytes \n", sizeof(float));
	return (0);
}
