#include <stdio.h>
/**
* main - Entry ponit of the program
* Return: 0 Always (Success)
*/
int main(void)
{
int digit;
for (digit = 0; digit < 10; digit++)
{
putchar(digit);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
