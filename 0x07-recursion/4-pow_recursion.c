#include "holberton.h"

/**
 * compare - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	if (y > 1)
	{
		x = x * _pow_recursion(x, y - 1);
	}

	return (x);
}
