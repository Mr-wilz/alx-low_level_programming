#include <stdio.h>
/**
 * main - Entry point of program printing first fifty fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++1;
	}
	printf("\n");
	return (0);
}
