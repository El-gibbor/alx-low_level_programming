#include <stdio.h>

/**
 * main - Entry point
 * prints thenumbers of base 16 in lower case
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
	putchar(digit);

	putchar('\n');
	return (0);
}
