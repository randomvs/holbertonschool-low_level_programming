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
int main(int argc, char *argv[])
{
	int change, coins;
	char *input = argv[1];

	change = coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(input);

	coins = change / 25;
	change = change % 25;
	coins = coins + change / 10;
	change = change % 10;
	coins = coins + change / 5;
	change = change % 5;
	coins = coins + change / 2;
	change = change % 2;
	coins += change;
	printf("%d\n", coins);
	return (0);
}
