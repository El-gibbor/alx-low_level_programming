#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: arguments count
 * @argv: Vector - array of strings (the actual arguments)
 * Return: 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	/**
	* the __attribute__((unused)) placed after the declaration
	* of the paremeter informs the compiler that the variable is
	* intentionally left unused. By using this attribute, the compiler
	* is prevented from generating warnings for unused variables within the function.
	*/
	printf("%d\n", argc - 1);
	return (0);
}
