#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b;
	unsigned long a = 0, c = 1, k;

	for (b = 0; b < 50; b++)
	{
		k = a + c;
		printf("%lu", k);

		a = c;
		c = k;

		if (b == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
