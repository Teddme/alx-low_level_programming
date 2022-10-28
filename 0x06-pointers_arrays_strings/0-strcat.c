#include "main.h"

/**
 * _strcat - concat strings
 * @dest: pointer to last part
 * @src: pointer to 1st part
 *
 * Return: exit with return of concatnated text
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
