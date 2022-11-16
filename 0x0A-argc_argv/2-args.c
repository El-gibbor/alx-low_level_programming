#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: counts of arguments
 * @argv: pointer to arrays of char (arguments passed to main)
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
