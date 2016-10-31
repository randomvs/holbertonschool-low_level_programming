#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @src: source string
 * @c: character to search for
 * Description: searches string for character, returns pointer to char
 * Return: pointer to char
 **/

char *_strchr(char *src, char c)
{
	char *start;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == c)
		{
			start = &src[i];
			return (start);
		}
	}

	if (src[i] == '\0')
		start = '\0';

	return (start);
}
