#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_index - returns 2 ^ y
 * @y: exponent value
 * Return: 2 ^ y or 0 if fail
 */
int binary_index(int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (2);
	return (2 * binary_index(y - 1));
}

/**
 * set_bit - changes a bit at index to 1
 * @n: pointer to int
 * @index: index to change
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int))
		return (-1);
	*n = *n | binary_index(index);
	return (1);
}
