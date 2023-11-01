#include "main.h"
/**
 *binary_to_uint - converts base 2 numbers to an unsigned integer.
 *@b: string pointer containing binary numbers
 *Return: converted nums
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (!b)
	return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '0' || b[a] == '1')
		{
			num <<= 1;
			num |= (b[a] - '0');
		}
		else
			return (0);
	}
	return (num);
}
