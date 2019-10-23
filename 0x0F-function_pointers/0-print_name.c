
#include "function_pointers.h"
/**
 *print_name - calls the other two funtions
 *@f: a void pointer
 *@name: the name of the person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
