#include "sort.h"

/**
 * swap - swap values of two indices in an array
 * @array: int array
 * @indexA: index of first value
 * @indexB: index of second value
 * Return: nothing
 */
void swap(int *array, size_t indexA, size_t indexB)
{
	int temp;

	temp = array[indexA];
	array[indexA] = array[indexB];
	array[indexB] = temp;
}

/**
 * quick_sort - use quicksort on an array
 * @array: array of int's
 * @size: size of array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
 	size_t index, runner, pivot, wall;

	if (array == NULL)
		return;

	index = 0;
	wall = 0;
	runner = 0;

	if (array[index] > array[pivot])
	{
		swap(array, index, pivot);

	}
}
