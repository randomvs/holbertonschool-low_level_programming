#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: array of board with values
 * Description: uses input a to print a chessboard
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
