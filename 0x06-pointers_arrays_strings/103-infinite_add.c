#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer.
 * @size_r: buffer size.
 * Return: Pointer to the result string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a_len = 0, b_len = 0, carry = 0, a, b, sum, biggest;

	while (n1[a_len] != '\0')
		a_len++;
	while (n2[b_len] != '\0')
		b_len++;
	if (a_len > b_len)
		biggest = a_len;
	else
		biggest = b_len;
	if ((biggest + 1) >= size_r)
		return (0);
	r[biggest + 1] = '\0';

	while (biggest >= 0)
	{
		if (a_len > 0) {
			a = n1[a_len - 1] - '0';
			a_len--;
		} else {
			a = 0;
		}
		
		if (b_len > 0) {
			b = n2[b_len - 1] - '0';
			b_len--;
		} else {
			b = 0;
		}
		
		sum = a + b + carry;
		carry = sum / 10;
		sum %= 10;
		r[biggest] = sum + '0';
		biggest--;
	}

	if (*(r) != '0')
		return (r);
	else
		return (r + 1);
}

int main(void)
{
	char num1[] = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char num2[] = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char result[100]; /*Adjust the buffer size as needed*/

	char *res = infinite_add(num1, num2, result, sizeof(result));
	if (res)
		printf("%s + %s = %s\n", num1, num2, res);
	else
		printf("Error\n");

	return (0);
}

