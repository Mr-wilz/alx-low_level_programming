#include <stdio.h>
/**
 * main - Entry point of program printing first fifty fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
        unsigned long fibo1 = 1, fibo2 = 2, fibosum;
        float total_sum;

        while (1)
        {
                printf("%.0f, %.0f", fibo1, fibo2);

                for (int i = 1; i < 50; i++)
                {
                        fibosum = fibo1 + fibo2;
                        printf(", %.0f", fibosum);
                }
                if (fibosum > 400000)
                        break;

                if ((fibosum % 2) == 0)
                        total_sum += fibosum;

                fibo1 = fibo2;
                fibo2 = fibosum;
        }
        printf("%.0f\n", total_sum);
	return (0);
}
