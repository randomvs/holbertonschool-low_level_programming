#include "holberton.h"

/**
 * compare - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}
	else
	{
		n = factorial(n - 1) * n;
		return (n);
	}
}
