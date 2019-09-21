#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = i + 1 ; j <= 57 ; j++)
		{
			if (j > i)
			{
				putchar (i);
				putchar (j);
			}
					if (i != 56 || j != 57)
					{
						putchar (44);
						putchar (32);
					}
		}
	}
		putchar ('\n');
	return (0);
}
