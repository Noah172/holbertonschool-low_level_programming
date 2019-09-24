#include "holberton.h"

/*
*print_alphabet_x10 - prints the alphabet 10 times
*
*alwais return 0.
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char a;
		while(i < 10)
		{
			for (a = 'a' ; a <= 'z' ; a++)
			{
				_putchar(a);
			}
			_putchar('\n');
			i++;
		}
}
