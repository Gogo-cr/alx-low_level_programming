#include <stdio.h>

/**
 * main - To print the size of various data types
 *
 * Return: always 0 (Good)
 *
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %lu", sizeof(v));
	printf("Size of an int: %lu", sizeof(w));
	printf("Size of a long int: %lu", sizeof(x));
	printf("Size of a long long int: %lu", sizeof(y));
	printf("Size of a float: %lu", sizeof(z));
	return (0);
}
