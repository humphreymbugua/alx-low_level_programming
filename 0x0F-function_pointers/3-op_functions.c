#include "3-calc.h"

/**
  * op_add - adds two integers
  * @a: first int
  * @b: second int
  *
  * Return: the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts b from a
  * @a: first int
  * @b: second int
  *
  * Return: the difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: first int
  * @b: second int
  *
  * Return: the product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a by b
  * @a: first int
  * @b: second int
  *
  * Return: the quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
  * op_mod - finds the remainder of a divide by b
  * @a: first int
  * @b: second int
  *
  * Return: the remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
