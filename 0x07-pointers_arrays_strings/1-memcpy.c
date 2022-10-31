#include "main.h"

/**
 * _memcpy - cp n bytes frm src to dest
 * @dest: ptr to dest
 * @src: ptr to src
 * @n: # of bytes
 *
 * Return: ret val.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
