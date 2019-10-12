#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */

int main(int argc, char* argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		if (a > argc)
		{
			printf("%s", argv[a-1]);
		}
	}
	
	printf("%i\n", a - 1);
	return (0);
}
