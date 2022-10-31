#include "main.h"

/**
 * _memcpy - cp n bytes frm src to dest
 * @dest: ptr to dest
 * @src: ptr to src
 * @n: # of bytes
 *
 * Return: ret val.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
	return (dest);
}
