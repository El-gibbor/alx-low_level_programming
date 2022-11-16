#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Arguments count
 * @argv: pointer to array of char which are CLI arguments
 * Return: 0 if success. else, 1 and print error if no argument is recieved
 */
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul =  mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
