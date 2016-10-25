#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/

void rev_string(char *s)
{
	int i = -1;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	char *temp[i + 1];

	for (; i >= 0; i--)
	{
		temp[j] = &s[i];
		j++;
	}

	i++;

	while (i < j)
	{
		s[i] = *temp[i];
		i++;
	}
}
