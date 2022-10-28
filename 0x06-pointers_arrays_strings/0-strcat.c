#include "main.h"

/**
 * strcat - concat strings
 * @dest: pointer to last part
 * @src: pointer to 1st part
 *
 * Return: exit with return of concatnated text
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
