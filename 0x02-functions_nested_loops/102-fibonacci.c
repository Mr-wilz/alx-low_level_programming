#include <stdio.h>
/**
 * main - Entry point of program printing first fifty fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fibosum;
	float total_sum;

	while (1)
	{
		fibosum = fibo1 + fibo2
		if (fibosum > 400000)
			break;

		if ((fibosum % 2) == 0)
			total_sum += fibosum;

		fibo1 = fibo2;
		fibo2 = fibosum;
	}
	printf("%.0f\n", total sum);

	return (0);
}
