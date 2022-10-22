#include "main.h"

/**
 * _isupper - checkes for uppercase
 * @c: parameter to be checked
 *
 * Return: 1 if true. else, 0 if otherwise.
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);

}
