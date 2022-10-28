#include "main.h"

/**
 * _strcmp - Compares pointers and  strings.
 * @s1: Points to 1st str.
 * @s2: Points to 1st str.
 *
 * Return: return the result.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
