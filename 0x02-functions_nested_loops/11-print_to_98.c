#include <stdio.h>

/**
 * print_to_98 - prints all natural number from input n to 98,
 *               in order separeted by a comma,
 *               followed by a new line.
 * @n: The number to be inputed and start counting from.
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
