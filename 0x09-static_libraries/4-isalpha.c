#include "main.h"
/**
* _isalpha - function that checks for alphabetic character
* @c: character to be checked
* Return: 1 (if c is a letter) or 0 (if c is not a letter)
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
