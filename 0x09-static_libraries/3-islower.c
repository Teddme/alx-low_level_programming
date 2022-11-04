#include "main.h"

/**
 * _islower - cks is lower
 * @c: input strs
 *
 * Return: 1 for lower and 0 for other.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
