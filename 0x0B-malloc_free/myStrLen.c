/**
 * _strlen - get the string length
 * @a: the given string
 * Return: lenghth of the string
 */
int myStrLen(char *a)
{
	int len = 0;

	for (; a[len] != '\0'; len++)
		;
	return (len);
}