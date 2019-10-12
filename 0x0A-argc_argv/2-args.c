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
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
