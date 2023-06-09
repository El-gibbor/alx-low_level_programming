#include <stdio.h>

/**
 * main - prints its name (program name)
 * @argc: number of arguments passed
 * @argv: array of strings (actual arguments)
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int indx;

	for (indx = 0; indx < argc; indx++)
	{
		printf("%s\n", argv[0]);
	}
return (0);
}
