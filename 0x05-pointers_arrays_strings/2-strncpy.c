#include "holberton.h"

/**
 * _strncpy - copies a string
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to copy
 * Description: copies string
 * Return: pointer to dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	while (j < n)
	{
		dest[i] = '\0';
		j++;
		i++;
	}

	return (dest);
}
