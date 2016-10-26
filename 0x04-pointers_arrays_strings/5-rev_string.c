#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	char temp[i];

	for (; i > 0; i--)
	{
		temp[j] = s[i - 1];
		j++;
	}

	while (i < j)
	{
		s[i] = temp[i];
		i++;
	}
}
