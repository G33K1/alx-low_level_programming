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
	printf("Size of char: %2d byte(s) \n", sizeof(char));
	printf("Size of Int: %2d byte(s) \n", sizeof(int));
	printf("Size of long int: %2d byte(s) \n", sizeof(long int));
	printf("Size of long long int: %2d byte(s) \n", sizeof(long long int));
	printf("Size of float: %2d byte(s) ", sizeof(float));
	return (0);
}
