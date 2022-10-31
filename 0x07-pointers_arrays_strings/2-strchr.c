#include "main.h"

/**
 * _strchr - find char
 * @s: input req.
 * @c: char.
 *
 * Return: rslt
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}