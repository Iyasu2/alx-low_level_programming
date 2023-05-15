#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;

	while (1)
	{
		printf("#cisfun$ ");
		getline(&line, &len, stdin);

		if (strcmp(line, "^c") == 0)
		{
			free(line);
			return (0);
		}
	}

	return 0;
}
