#include "main.h"

/**
 * _memcpy - cp n bytes frm src to dest
 * @dest: ptr to dest
 * @src: ptr to src
 * @n: # of bytes
 *
 * Return: ret val.
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
