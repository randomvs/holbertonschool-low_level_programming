#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * clear_bit - set bit and index to 0
 * @n: pointer to int
 * @index: index to change
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	i = *n ^ 1 << index;
	*n = *n & i;
	return (1);
}
