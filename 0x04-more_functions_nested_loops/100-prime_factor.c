#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Good)
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = l; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n" i);
				break;
			}
			d = n / i;
			n = d;
		}
	}

	return (0);
}
