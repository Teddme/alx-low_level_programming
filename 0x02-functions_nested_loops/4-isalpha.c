#include "main.h"

/**
 * _isalpha - ck input is alphabet
 * @c: input str
 *
 * Return: 1 if alp and 0 if other
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
