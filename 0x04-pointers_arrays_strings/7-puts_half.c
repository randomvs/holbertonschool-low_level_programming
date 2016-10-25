#include "holberton.h"

/**
 * puts_half - prints half of the string
 * @str: input string to print
 * Description: prints second half of string
 * Return: nothing
 **/

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;

	j = i / 2;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
