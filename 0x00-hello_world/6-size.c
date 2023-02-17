#include <stdio.h>
/**
 * main- Size
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %o byte(s)\n", sizeof(char));
	printf("Size of an int: %o byte(s)\n", sizeof(int));
	printf("Size of a long int: %o byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %o byte(s)\n", sizeof(long long int));
	printf("Size of a float: %o byte(s)\n", sizeof(float));
	return (0);
}
