#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: points to 1st string
 * @s2: points to 2nd string
 *
 * Return: return the result
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
