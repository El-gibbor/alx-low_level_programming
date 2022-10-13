#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 **/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
	printf("Size of char: %c byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(d));
	prinft("Size of a float: %f bytes(s)\n", sizeof(e));
	return (0);
}
