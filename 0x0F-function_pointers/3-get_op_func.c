#include "3-calc.h"
/**
 *get_op_func - Select function to the operation asked by user.
 *@s: selects a correct function to perform the operation asked by user.
 *Return: Pointer to function that corresponds to operator given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int o = 0;

	while (ops[o].op != '\0')
	{
		if (strcmp(s, ops[o].op) == 0)
			return (ops[0].f);

		o++;
	}

		return (ops[o].f);
}
