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

	for (alp = 'a' ; alp <= 'z' ; alp++)
	if (alp == 'e')
		{
		alp = 'e';
		}
	else if (alp == 'q')
		{
		alp = 'q';
		}
	else
		{
		putchar (alp);
		}
		putchar ('\n');

	return (0);
}
