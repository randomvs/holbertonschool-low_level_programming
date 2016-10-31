#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 * Description: retruns first occurrence in a string
 * Return: pointer to first instance ofr NULL
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, j, c, exit;

	exit = 0;
	c = -1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' && exit == 0; j++)
		{
			if (accept[i] == s[j])
			{
				exit = 1;
				if (j < c)
					c = j;
			}
		}
		exit = 0;
	}
	if (c == -1)
		return ('\0');
	return (&s[c]);
}
