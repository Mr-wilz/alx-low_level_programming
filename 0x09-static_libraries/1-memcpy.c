#include "main.h"
/**
 * _memcpy - Entry point of program
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: dest (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
