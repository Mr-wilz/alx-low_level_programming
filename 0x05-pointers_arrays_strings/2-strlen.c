#include "main.h"
/**
 * _strlen - function that counts length of a string
 * @s: function parameter
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
