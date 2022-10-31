#include<main.h>

/**
 * _memset -
 * @s : pt input s
 * 
 * @b : pt input b 
 * 
 * @n : size of pt 
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
