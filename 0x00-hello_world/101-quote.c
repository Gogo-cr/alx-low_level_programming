#include <stdio.h>
#include <unistd.h>

/**
 * main - Do not print using puts and printf
 *
 * Return: always 1 (Good)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
