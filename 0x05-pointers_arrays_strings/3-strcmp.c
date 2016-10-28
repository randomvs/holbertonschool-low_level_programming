#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare
 * Description: compares two strings to see which is
 * Return: -15 if s1 is less than s2, 0 if equal,
 * 15 if s1 is greater
 **/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != 0)
	{
		if (s1[i] > s2[i])
			return (15);
		if (s1[i] < s2[i])
			return (-15);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] == '\0')
		return (-15);

	return (15);
}
