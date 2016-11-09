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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Description: concatenate two strings, return NULL if fails
 * Return: pointer to string, NULL if fails
 *
 **/
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (s1 != NULL)
		i = _strlen(s1);
	if (s2 != NULL)
		j = _strlen(s2);

	if (s1 == NULL && s2 == NULL)
	{
		dest = "\n";
		return (dest);
	}
	dest = (char *)malloc((i + j - 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		dest[i + j] = s2[j];

	dest[i + j] = '\0';
	return (dest);
}
