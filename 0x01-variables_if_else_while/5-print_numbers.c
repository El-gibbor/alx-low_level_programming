#include <stdio.h>

/**
 * main - Entry point
 * print all single digit numbers
 * Return: Alwats 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%d", digit);
	putchar('\n');

	return (0);
}
