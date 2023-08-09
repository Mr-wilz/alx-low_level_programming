#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: function parameter 1
 * @accept: function parameter 2
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
