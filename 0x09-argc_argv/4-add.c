#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - find least amount of coins needed for change
 * @argc: number of parameters entered
 * @argv: strings entered including file name
 * Description: prints the minimum number of coins to make change
 * Return: zero
 **/

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
