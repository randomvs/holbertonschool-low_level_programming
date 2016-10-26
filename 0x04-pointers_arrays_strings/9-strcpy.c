#include "holberton.h"

/**
 * *_strcpy - copies string src to buffer pointed to by dest
 * @*dest: string pointer
 * @*src: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	for (i = 0; src[i] != '\0', i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
