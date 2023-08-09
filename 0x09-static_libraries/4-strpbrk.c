#include "main.h"
/**
 * _strpbrk - The _strpbrk() function finds first occurence of any set of bytes
 * @s: function parameter where serach is done
 * @accept: function parameter where the search bytes are located
 * Return: pointer (success) or NULL (failure)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
