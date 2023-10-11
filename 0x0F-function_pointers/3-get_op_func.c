#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 * The operation asked by the user.
 * @s: The operator passed as argument.
 * Author: kingsley
 * Return: A pointer to the function corresponding
 * To the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int in = 0;

	while (ops[in].op != NULL && *(ops[in].op) != *s)
		in++;

	return (ops[in].f);
}
