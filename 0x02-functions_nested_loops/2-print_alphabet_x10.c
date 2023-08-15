#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char Q;
	int j;

	j = 0;

	while (j < 10)
	{
		Q = 'a';
		while (Q <= 'z')
		{
			_putchar(Q);
			Q++;
		}
		_putchar('\n');
		j++;
	}
}
