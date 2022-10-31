#include "main.h"

/**
 * memset - ptr method.
 * @s: ptr to be filled.
 * @c: char input
 * @n: # of bytes.
 *
 * Return: A ptr.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
