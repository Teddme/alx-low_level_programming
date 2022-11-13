#include "main.h"

/**
 * _strpbrk - srch input.
 * @s: input str.
 * @accept: eval.
 *
 * Return: rslt.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
	}

		s++;
	}

	return ('\0');
}

