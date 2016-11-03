#include "holberton.h"

/**
 * _strlen_recursion - return string length
 * @s: string
 * Description: find string length using recursion
 * Return: string length
 **/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}

}

/**
 * pd - check if string is a palindrome
 * @s: string to check
 * @n: size of string -1
 * @i: counter through string
 * Description: determins if string is a palindrome
 * Return: 1 if palindrome, 0 if not
 **/

int pd(char *s, int n, int i)
{
	if (n <= i)
		return (1);

	if (s[i] != s[n])
		return (0);

	return (pd(s, n - 1, i + 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to check
 * Description: determins if string is a palindrome
 * Return: 1 if palindrome, 0 if not
 **/

int is_palindrome(char *s)
{
	return (pd(s, _strlen_recursion(s) - 1, 0));
}
