#include <stdio.h>

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");
	read = my_getline(&line, &len, stdin);

	printf("You entered: %s and the line number: %lu\n", line, read);

	return 0;
}
