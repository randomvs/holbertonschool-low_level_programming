#include <stdio.h>

/**
 * main - Writes combinations of 00-99
 * @void: Empty parameter list for main.
 *
 * Description: Writes all unique combinations of 2
 * digit numbers
 *
 * Return: 0 for success
*/
int main(void)
{
	int i, j, k, l, ival, jval, kval, lval;

	for (i = '0'; i <= '9'; i++)
	{
		ival = (i - '0') * 10;

		for (j = '0'; j <= '9'; j++)
		{
			jval = j - '0';

			for (k = '0'; k <= '9'; k++)
			{
				kval = (k - '0') * 10;

				for (l = '0'; l <= '9'; l++)
				{
					lval = l - '0';

					if ((ival + jval) < (kval + lval))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if (((ival + jval) != 98) || ((kval + lval) != 99))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
