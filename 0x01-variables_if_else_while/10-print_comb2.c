#include <stdio.h>

/**
 * main - Prints 00 - 99
 * @void: Empty parameter list for main.
 *
 * Description: Prints number 00-99 with only 5x putchar functions
 * Can only use putchar
 *
 * Return: 0 for success
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i + j < 114)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
