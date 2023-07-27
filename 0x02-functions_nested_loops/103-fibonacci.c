#include <stdio.h>
/**
 * main - prints sum of even fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	long int fibo1 = 1;
	long int fibo2 = 2;
	long int fibosum = 0;
	long int sum = 2;

	while (fibosum <= 4000000)
	{
		fibosum = fibo1 + fibo2;
	if ((fibosum % 2) == 0)
	{
		sum += fibosum;
	}
	fibo1 = fibo2;
	fibo2 = fibosum;
	}
	printf("%ld\n", sum);
	return (0);
}
