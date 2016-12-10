#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * set_bit - changes a bit at index to 1
 * @n: pointer to int
 * @index: index to change
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
