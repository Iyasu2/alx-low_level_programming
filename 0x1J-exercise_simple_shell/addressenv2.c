#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("%p, %p\n", *env, *environ);
	return (0);
}
