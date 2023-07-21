#include <stdio.h>
/**
* main - Entry ponit of the program
* Return: 0 Always (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
