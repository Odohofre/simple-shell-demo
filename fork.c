#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	printf("Before fork I was one\n");

	fork();

	if (pid == -1)
	{
		perror("Unsuccessful");
		return 1;
	}

	printf("After fork 1 became two\n");

	return 0;
}
