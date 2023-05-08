#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Entry point
 * Description: 'reads text file and print to POSIX'
 *
 * @filename: char input
 * @letters: size_t input
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	size_t count, i;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	count = fread(buffer, 1, letters, fp);
	if (count == 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[count] = '\0';
	for (i = 0; i < count; i++)
	{
		putchar(buffer[i]);
	}

	fclose(fp);
	free(buffer);

	return (count);
}
