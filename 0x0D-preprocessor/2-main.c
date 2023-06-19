#include <stdio.h>

/**
 * main - prints the name of the file it was compilled from.
 * 
 * Return: 0 (Succes)
*/
int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}