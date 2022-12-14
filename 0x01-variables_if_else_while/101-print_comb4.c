#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int l1, l2, l3;

	for (l1 = 0; l1 < 8; l1++)
	{
		for (l2 = l1 + 1; l2 < 9; l2++)
		{
			for (l3 = l2 + 1; l3 < 10; l3++)
			{
				putchar((l1 % 10) + '0');
				putchar((l2 % 10) + '0');
				putchar((l3 % 10) + '0');

				if (l1 == 7 && l2 == 8 && l3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
