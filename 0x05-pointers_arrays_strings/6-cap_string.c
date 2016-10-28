#include "holberton.h"

/**
 * string_toupper - changes all lower case to capital letters
 * @str: string to modify
 * Description: changes all lower case letters to capitals
 * Return: char
 **/

char *upper(char *c)
{
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;
	return (c);
}

int new_word(char c)
{
	int i = 0;
	char *word = " \t\n,;.!?\"(){}";

	while (word[i] != '\0')
	{
		if (c == word[i])
			return (1);
	}

	return (0);
}

char *cap_string(char *str)
{
	int i;

	upper(*str);

	for (i = 1; str[i] != '\0'; i++)
	{
		if (new_word(str[i - 1]) == 1)
			upper(*str[i]);
	}
	return (str);
}
