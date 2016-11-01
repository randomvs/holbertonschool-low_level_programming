#include "holberton.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer
 * Description: set value of a pointer to a pointer
 * Return: nothing
 **/

void set_string(char **s, char *to)
{
	*s = to;
}
