#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fAll;
	float total_sum;

	while (1)
	{
		fAll = f1 + f2;
		if (fAll > 4000000)
			break;

		if ((fAll % 2) == 0)
			total_sum += fAll;

		f1 = f2;
		f2 = fAll;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
