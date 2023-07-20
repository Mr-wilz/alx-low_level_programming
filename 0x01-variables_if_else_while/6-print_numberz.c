#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number = 0;
while (number <= 9)
{
utchar('0' + number);
number++;
}
putchar('\n');
return 0;
}
