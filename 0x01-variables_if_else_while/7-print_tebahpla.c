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
	char alp;

	for (alp = 'z' ; alp >= 'a' ; alp--)
		putchar (alp);
		putchar ('\n');
	return (0);
}
