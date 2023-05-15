#include <stdio.h>
#include <stdlib.h>

#define MAX_PID_FILE "/proc/sys/kernel/pid_max"

int main(void)
{
	FILE *fp;
	char pid_max[10];

	fp = fopen(MAX_PID_FILE, "r");
	if (fp == NULL)
	{
		printf("Error opening file %s\n", MAX_PID_FILE);
		exit(1);
	}

	fgets(pid_max, 10, fp);
	fclose(fp);

	printf("%s", pid_max);

	return 0;
}
