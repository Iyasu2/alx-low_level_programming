#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern char **environ;
char *own_getenv(char *a);

char *own_getenv(char *a)
{
	char **b = environ;
	int i = 0;

	while(b[i] != NULL)
	{
		char *token = strtok(b[i], "=");
		if (strcmp(a, token) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	char *value;

	if (ac != 2)
		return (1);
	value = own_getenv(av[1]);
	if (value != NULL)
		printf("%s = %s\n", av[1], value);
	return (0);
}
