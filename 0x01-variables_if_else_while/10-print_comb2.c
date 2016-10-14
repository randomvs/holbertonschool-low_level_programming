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
	int ten, one;

	for (ten = 48; ten <= 57; ten++)
	{
		for (one = 48; one <= 57; one++)
		{
			putchar(ten);
			putchar(one);
			if (one + ten < 114)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
