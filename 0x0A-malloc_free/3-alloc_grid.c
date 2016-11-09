#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a two demensional array
 * @width: width of grid
 * @height: height of grid
 * Description: creat a grid, initialize to 0
 * Return: pointer to string, NULL if fails
 *
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));
	}

	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
