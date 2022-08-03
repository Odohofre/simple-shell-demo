#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
	int i = 1;

	while (av[i])
	{
		printf("argument %d is %s\n", i, av[i]);
		i++;
	}
	return 0;
}
