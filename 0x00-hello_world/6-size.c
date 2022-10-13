#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 **/
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of n long int: %ld byte(s)\n", sizeof(long int));
	printf("size of n long long int: %lld byte(s)\n", sizeof(long long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
