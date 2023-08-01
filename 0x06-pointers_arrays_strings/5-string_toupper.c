#include "main.h"
/**
 * string_toupper - fubction that changes all lowercase letters to uppercase.
 * @s: function parameter (analized string)
 *
 * Return: upercased String (Success)
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
