#include "3-calc.h"

/**
 * main - executes the main operations
 * @argc: counts of arguments passed
 * @argv: arguments passed (prog name, operands and the operator)
*/
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    if (!get_op_func(argv[2]))
    {
        
    }
}