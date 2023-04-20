#include "3-calc.h"
/**
 * get_op_func - Selects the appropriate function to perform the
 * @s: A pointer to a string containing the operator
 *
 * Return: A pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == (*s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
