#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the min number of coins
 * @argc: num of args
 * @argv: args vector
 * Return: always 0 and 1 if err
 */

int main(int argc, char *argv[])
{
	int num, j, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			res++;
			num -= coins[j];
		}
	}

	printf("%d\n", res);
	return (0);
}
