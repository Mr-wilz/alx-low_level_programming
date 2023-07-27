#include <stdio.h>
/**
 * print_fibonacci_sequence - function that prints fibonacci numbers
 * main - Entry point to count th fibonacci sequence
 * @count: function parameter to be counted
 * Return: 0 (success)
 */
void print_fibonacci_sequence(int count)
{
	int num1 = 1;
	int num2 = 2;
	int nextNum;
	int i;

	printf("%d, %d", num1, num2);

	for (i = 2; i < count; i++)
	{
		nextNum = num1 + num2;
		printf(", %d", nextNum);
		num1 = num2;
		num2 = nextNum;

	}
	printf("\n");
}
/* main function that counts the sequence*/
int main(void)
{
	int count = 98;

	print_fibonacci_sequence(count);
	return (0);
}
