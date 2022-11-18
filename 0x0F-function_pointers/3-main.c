#include "3-calc.h"

/**
  * main - performs simple calculations
  *
  * @argc: number of arguments passed
  * @argv: array of arrgc elements
  *
  * Return: Success --> return of the operation
  *           98  --> wrong number of arguments
  *           99  --> wrong operator, refer to 3-get_op_func.c
  *          100  --> trying to divide by 0
  */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	result = get_op_func(op)(a, b);
	if (!result)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
