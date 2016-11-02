#include "holberton.h"

/**
 * compare - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/

void _print_rev_recursion(char *s)
{
	if (s[1] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
	else
	{
		_putchar(s[0]);
	}

}
