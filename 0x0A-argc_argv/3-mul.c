#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints multiplied result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	return (0);
}
