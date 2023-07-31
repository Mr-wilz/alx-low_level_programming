#include "main.h"
/**
 * _strcpy - functiion that copies a string
 * @dest: destination value
 * @src: Source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = 1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
		return (dest);
}
