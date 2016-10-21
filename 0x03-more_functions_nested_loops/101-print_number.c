#include <stdio.h>
#include <math.h>
#include "holberton.h"

/**
 * print_number - print an int using only _putchar
 * number: int to be printed by function
 *
 * Return: nothing
 **/

/**
 * exponent - x to the power of y
 * @x: base number
 * @y: exponent
 * Description: calcuates x^y
 * Return: x^y
 *
 **/

int exponent(int x, int y)
{
	int power;

	power = x;

	if (y == 0)
		return (1);

	while (y >= 2)
	{
		power  = power * x;
		y--;
	}
	return (power);
}

void print_number(int number)
{
	int size, counter, digit;

	digit = 0;
	size = 1;

	if (number < 0)
	{
		_putchar('-');
		number = number * -1;
	}

	for (counter = number; counter >= 10; size++)
	{
		counter = counter / 10;
	}

	counter = number;

	while (size >= 2)
	{
		digit = counter / exponent(10, size - 1);
		_putchar(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
	}
	_putchar(number % 10 + '0');
}
