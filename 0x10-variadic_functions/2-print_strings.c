#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a newline
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strList;

	va_start(strList, n);
	for (i = 0; i < n; i++)
	{
		/*assign each variadic str arg to a ptr*/
		char *argStr = va_arg(strList, char *);

		if (argStr) /* "(nil)" if one of the string is NULL*/
			printf("%s", argStr);
		else
			printf("(nil)");

	/* xcute if its not Null and not the last element */
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(strList);
	printf("\n");
}
