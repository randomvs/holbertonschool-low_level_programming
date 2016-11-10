#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - alloctes memory using malloc
 * @b: number of blocks required
 * Description:
 * Return: pointer to allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *a;

	if (b <= 0)
	{
		return;
	}
	a = (void *)malloc(b);
	if (a = NULL)
	{
		return;
	}
	return (a);
}
