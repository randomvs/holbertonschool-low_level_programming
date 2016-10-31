#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: bytes to copy to dest
 * Description: copies n values from src to dest
 * Return: pointer to memory
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
