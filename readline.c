#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	ssize_t n_read = 0;
	char *lineptr = NULL;
	size_t n = 0;

	/* Prompt */
	write(1, "$ ", 2);

	/* Get user input */
	n_read = getline(&lineptr, &n, stdin);
	
	printf("%s\n", lineptr);

	return 0;
}
