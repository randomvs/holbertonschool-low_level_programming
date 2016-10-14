#include <stdio.h>

/**
 * main - Prints quote without using puts or printf
 *
 * Return: zero on success
 *
 */
int main(void)
{
	char *s="and that piece of art is useful - Dora Korpar, 2015-10-19\n";

	while (*s)
	{
		putchar(*s++);
	}
	return (0);
}
