#include "main.h"

/**
 * strcat - concat strings
 * @s1: pointer to 1st part
 * @s2: pointer to last part
 *
 * Return: exit with return of concatnated text
 */
char *strcat(char *s1, const char *s2)
{
	int index = 0, s2_len = 0;

	while (s2[index++])
		s2_len++;

	for (index = 0; s1[index]; index++)
		s2[s2_len++] = s1[index];

	return (s2);
}
