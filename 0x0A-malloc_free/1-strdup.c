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
	return (i);
}
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 **/
char *_strdup(char *str)
{
	char *dest = (char *)malloc((_strlen(str)) * sizeof(char));
	unsigned int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = str[i];
	return (dest);
}
