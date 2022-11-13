#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - checked malloc.
 * @b: # allocated.
 *
 * Return: ptr.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}

