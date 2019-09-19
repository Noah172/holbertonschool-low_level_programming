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
	int num, nu;

	for (num = 48 ; num <= 57 ; num++)
	{
	for (nu = 48 ; nu <= 57 ; nu++)
	{
		putchar (num);
		putchar (nu);
	if (nu != 57 || num != 57)
	{
		putchar (44);
		putchar (32);
	}
	}
	}
		putchar ('\n');
	return (0);
}
