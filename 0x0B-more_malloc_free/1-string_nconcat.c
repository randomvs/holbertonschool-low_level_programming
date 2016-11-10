#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL)
		return (1);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * string_nconcat - concatenate n chars of second string to first
 * @s1: first string
 * @s2: second string
 * @n: number of chars to concatenate
 * Description: concatenate two strings, return NULL if fails
 * Return: pointer to string, NULL if fails
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int size1, size2, i, j;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n > size2 - 1)
		n = size2 - 1;

	dest = (char *)malloc((size1 + n) * sizeof(char));
	if (dest == NULL || n < 0)
		return (NULL);
	if (size1 == 1 && size2 == 1)
		return (NULL);

	for (i = 0; i < size1 - 1; i++)
		dest[i] = s1[i];

	for (j = 0; j <= n; j++)
	{
		dest[i + j] = s2[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
