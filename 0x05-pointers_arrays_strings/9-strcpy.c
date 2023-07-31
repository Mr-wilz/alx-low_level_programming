#include "main.h"
/**
 * _strcpy - functiion that copies a string
 * @dest: destination value
 * @src: Source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[1] = src[i];
	}
	dest[++i]  = '\0';
	return (dest);
}
