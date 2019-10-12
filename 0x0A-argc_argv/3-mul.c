#include <stdlib.h>
#include <stdio.h>

/**
 *main - the main function
 *@argc: the number of args
 *@argv: array of the arrgs
 *Return: always to 0
 */

int main(int argc, char *argv[])
{
	int a, x = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			x = x * atoi(argv[a]);
		}

		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
