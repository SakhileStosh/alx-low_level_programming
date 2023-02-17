#include <stdio.h>
/**
 * main- Size
 *
 * Return: Always 0
 */
int main(void)
{
	char s;
	int a;
	long int k;
	long long int h;
	float i;

	printf("Size of a char: %o byte(s)\n", sizeof(s));
	printf("Size of an int: %o byte(s)\n", sizeof(a));
	printf("Size of a long int: %o byte(s)\n", sizeof(k));
	printf("Size of a long long int: %o byte(s)\n", sizeof(h));
	printf("Size of a float: %o byte(s)\n", sizeof(i));
	return (0);
}
