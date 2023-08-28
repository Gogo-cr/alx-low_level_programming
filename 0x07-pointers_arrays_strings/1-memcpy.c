#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area
 * @src: memory where is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int i = n;

	for (; z < i; z++)
	{
		dest[z] = src[z];
		n--;
	}
	return (dest);
}
