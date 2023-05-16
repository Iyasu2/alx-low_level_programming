#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT_LENGTH 1024

int main(void)
{
	char *line = NULL;
	char *args[MAX_INPUT_LENGTH];
	size_t len = 0;
	int i, status;

	while (1)
	{
		printf("#cisfun$ ");
		getline(&line, &len, stdin);

		if (strcmp(line, "^c") == 0)
		{
			free(line);
			return (0);
		}
		line[strcspn(line, "\n")] = 0;
		char *token = strtok(line, " ");
		i = 0;
		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;
		pid_t pid = fork();
		if (pid == -1)
		{
			perror("fork");
		}
		else if (pid == 0)
		{
			execve(args[0], args, NULL);
			perror("execve");
		}
		else
		{
			waitpid(pid, &status, 0);
		}
	}

	return 0;
}
