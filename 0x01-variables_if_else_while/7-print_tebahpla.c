#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Good)
 */
int main(void)
{
	char Q;

	for (Q = 'z'; Q >= 'a'; Q--)
	{
		putchar(Q);
	}
	putchar('\n');
	return (0);
}
