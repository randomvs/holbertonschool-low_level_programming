#include "holberton.h"

/**
 * _strspn - geet length of a prefix substring
 * @s: string
 * @accept: bytes being compared
 * Description: finds number of bytes required to find accept in s
 * Return: bytes required to find accept
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, exit;
	unsigned int length = 0;

	exit = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' && exit == 0; j++)
		{
			if (accept[i] == s[j])
			{
				exit = 1;
				if (j + 1 > (int)length)
					length = j + 1;
			}
		}
		if (exit == 0)
		{
			length = 0;
			return (length);
		}
		exit = 0;
	}
	return (length);
}
