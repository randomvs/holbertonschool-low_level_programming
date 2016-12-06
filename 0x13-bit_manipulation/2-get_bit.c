#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - return value of bit a given index;
 * @n: source decimal
 * @index: index of binary value
 * Return: value at given index, -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	n = n & 1;
	return (n);
}
