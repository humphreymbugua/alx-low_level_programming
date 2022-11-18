#include "3-calc.h"

/**
  * get_op_func - selects correct function to perform the operation asked by
  *            the user
  * @s: the operator
  *
  * Return: pointer to the function that corresponds to the operator
  *        99 --> the operator does not match +, -, *, /, %.
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
	while (i <= 5)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
