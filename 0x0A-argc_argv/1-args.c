#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: arguments count
 * @argv: Vector - array of strings (the actual arguments)
 * Return: 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
