#include <stdio.h>
/**
 * main - Entry point of program printing first fifty fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int i;
	
	printf("%d, %d", num1, num2);

	for (i = 2; i < 50; i++)
	{
		int nextNum = num1 + num2;
		printf(", %d", nextNum);
		num1 = num2;
		num2 = nextNum;
	}
	printf("\n");
	return (0);
}
