#include "main.h"

/**
 * _memset - ptr method.
 * @s: ptr to be filled.
 * @b: char input
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
