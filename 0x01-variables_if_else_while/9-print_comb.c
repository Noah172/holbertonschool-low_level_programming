#include <stdlib.h>
#include <time.h>
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
	char num;
	char com = 44;

	for (num = 48 ; num <= 57 ; num++)
	{
	putchar (num);
		if (num < 57)
		{
		putchar (com);
		putchar (' ');
		}
	}
		putchar ('\n');
	return (0);
}
