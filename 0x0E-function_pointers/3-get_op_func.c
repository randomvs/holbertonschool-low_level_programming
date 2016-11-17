#include "function_pointers.h"

/**
 * get_op_func - selects and returns correct function
 * @s: string containing operand
 * Return: pointer to function, NULL if fails
 **/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return (*ops[i].f);
		}
		i++;
	}
	return (NULL)
}
