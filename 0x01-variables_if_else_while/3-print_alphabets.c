#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
/* Print lowercase alphabet*/
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
/* Print uppercase alphabet*/
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
