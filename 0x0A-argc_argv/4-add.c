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
        int a, x = 0;

        if (argc > 1)
        {
                for (a = 1; a < argc; a++)
		{
			x = x + atoi(argv[a]);
		}

                printf("%d\n", x);
        }
        else if (argc == 1)
        {
                printf("0\n");
        }

        return (0);
}
