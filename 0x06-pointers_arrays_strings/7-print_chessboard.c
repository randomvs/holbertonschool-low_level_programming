#include "holberton.h"

/**
 * print_chessboard -
 * @a:
 * Description:
 * Return: nothing
 **/

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x <= 8; x++)
		{
			if (x == 8)
				_putchar('\n');
			else
				_putchar(a[y][x]);
		}
	}
}
