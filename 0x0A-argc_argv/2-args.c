#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: argument count
 * @argv: the actual arguments recieved
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	int indx = 0;

	for (; indx < argc; indx++)
	{
		printf("%s\n", argv[indx]);
	}
	return (0);
}
