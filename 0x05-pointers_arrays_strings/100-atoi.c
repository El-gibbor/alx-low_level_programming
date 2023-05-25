#include "main.h"

/**
 * _atoi - converts a given string to integer
 * @s: parameter to check and convert
 * Return: The integer value of the string
 * Author: ELGIBBOR
 */
int _atoi(char *s)
{
	int isInt = 0, minus_sign = 1, charIndx = 0;
	unsigned int int_value = 0; /*undsigned handles larger value range*/

	while (s[charIndx] != '\0')
	{
		if (s[charIndx] == '-')
			minus_sign *= -1;

		while (s[charIndx] >= '0' && s[charIndx] <= '9')
		{
			isInt = 1;
			int_value = (int_value * 10) + (s[charIndx] - '0');
			charIndx++;
		}
		if (isInt == 1)
			break;
		charIndx++;
	}
	int_value *= minus_sign;
	return (int_value);
}
