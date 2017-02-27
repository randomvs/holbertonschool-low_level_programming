#include "sort.h"

/**
 * partition - finds split in array and swap smaller items
 * @array: subarray to sort
 * @size: size of subarray
 * @og_array: original array
 * @og_size: size of full array
 * Return: index to split into two subarrays
 */
size_t partition(int *array, size_t size, int *og_array, size_t og_size)
{
	int pivot, temp;
	long start, end;

	pivot = array[size - 1];
	start = -1;
	end = size;

	while (1 == 1)
	{
		do {
			start++;
		} while (array[start] > pivot);
		do {
			end--;
		} while (array[end] > pivot);

		if (start >= end)
		{
			return ((size_t) start);
		}
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		print_array(og_array, og_size);
	}
}

/**
 * quick - true quick sort function
 * @array: subarray to sort
 * @size: size of subarray
 * @og_array: original array
 * @og_size: size of full array
 * Return: nothing
 */
void quick(int *array, size_t size, int *og_array, size_t og_size)
{
	size_t split;

	split = 0;

	if (size > 1)
	{
		split = partition(array, size, og_array, og_size);
		quick(array, split, og_array, og_size);
		quick(&array[split], size - split, og_array, og_size);
	}
}

/**
 *quick_sort - implement quicksort on an array of ints
 *@array: array of ints
 *@size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick(array, size, array, size);
}
