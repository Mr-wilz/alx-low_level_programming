#include "main.h"
/**
 * long_1 - checks if a string is a palindrome
 * @x: input
 * Return: 0
 */

int long_1(char *x)
{
	if (*x != '\0')
	{
		return (1 + long_1(x + 1));
	}
	return (0);

}
/**
 * compare - compaes the string
 * @x: input
 * @y: input
 * Return: 0
 */
int compare(char *x, int y)
{
	if (y <= 0)
	{
		return (1);
	}
	if (*x == *(x + (y - 1)))
	{
		return (compare(x + 1, y - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Main Entry
 * @x: input
 * Return: 0
 */
int is_palindrome(char *x)
{
	int y;

	y = long_1(x);
	return (compare(x, y));
}
