#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
int word_count(char *s, int word, int count)
{
	if (s[0] == " ")
		return word_count(++s, 0, count);

	if (s[0] != " " && s[0] != '\0' && word = 1)
	{
		return (word_count(++s, 1, count));
	}
	else if (s[0] != " " && s[0] != '\0' && word = 0)
	{
		return (word_count(++s, 1, ++count))
	}
	else if (s[0] == '\0')
		return (count);
}
/**
 * argstostr - concatenates all arguments of program
 * @ac: number of arguments
 * @av: arguments, pointer to strings
 * Description: concatenate all args to one string, separated by \n
 * Return: pointer to string, NULL if fails
 **/
char **strtow(char *str)
{
	char **list;
	unsigned int size, num_words;

	if (str == NULL)
		str = "";

	size = _strlen(str);
	num_words = word_count(str);


	printf("%s\n", str);
	printf("%d\n", num_words

}
