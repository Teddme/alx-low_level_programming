#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

int main(void)
{
<<<<<<< HEAD
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 
	      		2015-10-19\n", 
	      		59);
=======

	char a[83] = "and that piece of art is useful\"",  b[28] = " - Dora Korpar, 2015-10-19\n";
	strcat(a, b);
	write(STDOUT_FILENO, a, 83);
>>>>>>> bb7980f (jo)
	return (1);

}
