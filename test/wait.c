#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status = 9;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Wait for me, wait for me\n");

	}
	else
	{
		wait(&status);
		printf("Oh, it's all better now\n");
		printf("Status is %d\n", status);
	}
	return (0);
}
