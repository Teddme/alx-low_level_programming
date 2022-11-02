#include "main.h"

/**
 * _strlen_recursion - ret len of input.
 * @s: input str
 *
 * Return: result.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
