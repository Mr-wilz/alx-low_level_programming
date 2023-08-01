#include "main.h"
/**
 * _strstr - The _strstr() function locates first occurence of a substring
 * @haystack: function parameter where search is done
 * @needle: function parameter whose occurence if searched
 *Return: pointer (Success) or NULL (Failure)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
