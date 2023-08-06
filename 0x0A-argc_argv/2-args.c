#include <stdio.h>
/**
* main - function that prints argument
* @argc: argument count
* @argv: argument vector
* Return: string (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
