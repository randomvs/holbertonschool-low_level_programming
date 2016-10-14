#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 16
 * @void: Empty parameter list for main.
 *
 * Description: Prints all hexadecimals
 *
 * Return: 0 for success
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
