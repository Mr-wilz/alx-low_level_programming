#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: function parameter (destination string)
 * @src: function parameter (source string)
 * @n: function parameter (n bytes to copy)
 * Return: dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
