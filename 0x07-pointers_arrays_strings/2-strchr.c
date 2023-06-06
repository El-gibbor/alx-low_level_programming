#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: pointer to the located character or null if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }

    return NULL;
}
