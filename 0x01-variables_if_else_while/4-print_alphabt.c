#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - alphabetical printing without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char a;

		for (a = 'a'; a <= 'z'; a++)

		if (a == 'a' || a == 'e')
		continue;
		else
		putchar(a);
		putchar('\n');
		return (0);
}
