#include <stdio.h>

/**
 * main - program that prints its name
 * @argv: name of argument to print
 *@argc: arguments count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
