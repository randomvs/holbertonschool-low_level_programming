#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - The last digit
 * @void: Empty parameter list for main.
 *
 * Description: Prints last digit of random number and tells
 * if it is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: 0 for success
*/
int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
