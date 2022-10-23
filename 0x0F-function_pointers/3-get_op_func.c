#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - returns the appropriate funtion
 * @s: pointer to the operator
 *
 * Return: pointer to the funtion
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

	while (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
