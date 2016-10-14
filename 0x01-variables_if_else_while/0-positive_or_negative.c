#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *Positive or Negative - print sign of random number
 *
 *Description: this if/else statement delares the sign (positive
 *or negative) of a random number. It also states if the value
 *is zero.
*/
int main(void)
{
/**
 *variable n has been declared
 *coding then assigns the random value.
 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/**
 *if (n > 0) - produces response if n is positive
 *else if (n == 0 ) - else if produces response if n is zero
 *else - produces response if n is negative
 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
