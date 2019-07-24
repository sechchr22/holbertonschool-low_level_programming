#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - returns a pointer to the function that
 * corresponds to the operator given as a parameter
 * @s: pointer to a char
 * Return: a pointer to a function corresponding to the s
 * or 0
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
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);

		i++;
	}

return (NULL);
}
