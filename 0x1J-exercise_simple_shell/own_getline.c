#include <stdio.h>
#include <stdlib.h>

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t i = 0;
	int c;

	if (*lineptr == NULL)
	{
		*n = 128;
		*lineptr = malloc(*n);
	}

	while ((c = fgetc(stream)) != EOF)
	{
		if (i == *n - 1)
		{
			*n *= 2;
			*lineptr = realloc(*lineptr, *n);
		}

		(*lineptr)[i++] = c;

		if (c == '\n')
		{
			break;
		}
	}

	(*lineptr)[i] = '\0';

	return i == 0 ? -1 : i;
}
