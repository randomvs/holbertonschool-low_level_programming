#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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
	char ten, one;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
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
