#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads text file and  print to STDOUT.
 * @filename: the file to be read
 * @letters: number of letters to be read and printed
 * Return: actual number of bytes (Success) or 0(failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t b = 0;
	int c;

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	while (letters > 0 && (c = getc(file)) != EOF)
	{
		if (write(STDOUT_FILENO, &c, 1) == -1)
		{
			fclose(file);
			return (-1);
		}

		b++;
		letters--;
	}

	fclose(file);
	return (b);
}
