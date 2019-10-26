#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: the separator of the strings
 *@...: the args (strings)
 *@n: the number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int c;
	char *s;

	va_start(st, n);

	for (c = 0; c < n; c++)
	{
		s = va_arg(st, char*);


		if (s == NULL)
			printf("nill");
		printf("%s", s);

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(st);
	putchar('\n');
}
