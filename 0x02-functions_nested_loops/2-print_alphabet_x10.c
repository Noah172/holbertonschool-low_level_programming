#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints alphabet with _putchar
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;
		while (i < 10)
		{
			for (a = 'a' ; a <= 'z' ; a++)
			{
				_putchar(a);
			}
			_putchar('\n');
			i++;
		}
}
