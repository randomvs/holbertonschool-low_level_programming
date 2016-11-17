#include "function_pointers.h"

/**
 * main -
 * @array: array to operate on
 * @size: size of array
 * @cmp: compare function
 * Return: nothing
 **/
int main(int ac, char *argv[])
{
	int num1, num2;
	char* operator;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[3] != '+')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[2]) == NULL || atoi(argv[4]) == NULL)
	{
		printf ("Error\n");
		exit();
	}
	num1 = atoi(argv[2]);
	num2 = atoi(argv[4]);
	operator = argv[3];

	calc = get_op_func(operator, num1, num2);
	printf("%d\n", calc);
	return (0);
}
