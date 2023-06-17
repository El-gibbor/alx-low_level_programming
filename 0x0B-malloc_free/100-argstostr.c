#include <stdlib.h>
#include "main.h"
#include "myStrLen.c"

/**
 * argstostr - cocatinates all arguments of a prog
 * @ac: argument count
 * @av: commandline arguments
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0, strLen = 0;
	char *cmdarg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		strLen += myStrLen(av[i]);
	}
	cmdarg = malloc(strLen + ac + 1);
		if (!cmdarg)
			return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cmdarg[k] = av[i][j];
			k++;
		}
		cmdarg[k] = '\n';
		k++;
	}
	cmdarg[k] = '\0';
	return (cmdarg);
}
