#include "holberton.h"

/* betty style doc for function main goes there */

/**
 *print_alphabet - prints the alphabet
 *
 *the _putchar is a command made for this exercice
 * eclared in the holberton.h  *header
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
}
