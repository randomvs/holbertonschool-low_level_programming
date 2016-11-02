#include "holberton.h"

/**
 * compare - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/

int _strlen_recursion(char *s)
{
	if (s[1] == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}

}
