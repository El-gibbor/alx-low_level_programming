#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char q;
int w;
long int e;
long long int r;
float t;

	printf("Size of a char: %lu byte(s)\n", sizeof(q));
	printf("Size of an int: %lu byte(s)\n", sizeof(w));
	printf("Size of a long int: %lu byte(s)\n", sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(r));
	printf("Size of a float: %lu byte(s)\n", sizeof(t));
	return (0);
}
