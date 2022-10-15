#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main method
 * Return: return one for success
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar,", 59);
	return (1);
}
