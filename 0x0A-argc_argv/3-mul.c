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
	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}
	return (0);
}
