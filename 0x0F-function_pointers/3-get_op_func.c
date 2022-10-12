#include "3-calc.h"

/**
 * get_op_func - function ptr that selects the func
 * @s: the operator given
 * Return: ptr to the func
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
	int k;

	k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
			return (ops[k].f);
		k++;
	}
	return (NULL);
}
