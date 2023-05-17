#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}

// int main(void)
// {
// 	int one, two, i, next, sumEve;

// 	one = 0, two = 1, sumEve = 0;

// 	printf("%d, %d", one, two);

// 	for (i = 2; i <= 33; i++)
// 	{
// 		next = two + one;
// 		one = two;
// 		two = next;
// 		printf(", %d", next);
// 		if (next % 2 == 0 && next < 4000000)
// 		{
// 			sumEve += next;
// 		}
// 	}
// 	printf("\nsum of even nums in fib sequence: %d", sumEve);
// 	printf("\n");
// 	return (0);
// }
