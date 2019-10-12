#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */

int main(int argc, char* argv[])
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
