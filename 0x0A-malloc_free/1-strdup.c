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

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * _strdup - duplicate string
 * @str: source string
 * Description: duplicate string
 * Return: pointer to string, NULL if fail
 **/
char *_strdup(char *str)
{
	char *dest = (char *)malloc((_strlen(str)) * sizeof(char));
	unsigned int i;

	if (dest == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
