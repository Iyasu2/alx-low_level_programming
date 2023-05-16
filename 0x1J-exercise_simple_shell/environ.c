#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av)
{
	int i  = 0;
	char **env = environ;

	while(env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
