#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *path = getenv("PATH");
	char *directory = strtok(path, ":");
	while (directory != NULL)
	{
		printf("%s\n", directory);
		directory = strtok(NULL, ":");
	}
	return 0;
}
