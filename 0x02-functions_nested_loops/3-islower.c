#include "main.h"
/**
 * _islower - program that checks for lower case character
 * @c: parameter to be checked
 * Return: 1 (Success) or 0 (Failure)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
