#include <stdio.h>

/**
 * main -list all the natural numbers below 1024 (excluded)
 *       that are mutiples of either 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += 1;
	}

	printf("%d\n", sum);

	return (0);
}
