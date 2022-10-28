#include "main.h"

/**
 * add_strings - inc nums.
 * @n1: 1st str.
 * @n2: 2nd str.
 * @r: temp.
 * @r_index: index.
 *
 * Return: return results
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	if (*n1 != NULL and  *n2 != NULL)
	{
		r=*n1+*n2;
	}
	if(r)
	{
		return r;
	}
	else
	{
		return 0;
	}
}
