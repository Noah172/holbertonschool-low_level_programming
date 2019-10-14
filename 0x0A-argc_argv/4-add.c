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
        int s, i;

        if (argc == 1)
        {
                printf("0\n");
        }

        else
        {
                s = 0;
                for (i = 1; i < argc; i++)
                {

                        if ((*argv[i] >= 48 && *argv[i] <= 57) || *argv[i] == 45
)
                        {
                                s = s + atoi(argv[i]);
                        }
                        else
                        {
                                printf("Error\n");
                                return (1);
                        }
                }
                printf("%d\n", s);
        }

        return (0);
}
