#include "sort.h"
/**
 * bubble_sort - execute bubble sort on an array
 * @array: array of int's
 * @size: size of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, runner, end, sorted;
	int temp;

	if (array == NULL || size <= 1)
		return;

	end = size;
	while (end > 0)
	{
		sorted = 1;
		index = 0;
		runner = 1;
		while (runner < end)
		{
			if (array[index] > array[runner])
			{
				temp = array[runner];
				array[runner] = array[index];
				array[index] = temp;
				print_array(array, size);
				sorted = 0;
			}
			index++;
			runner++;
		}
		if (sorted)
			break;
		end--;
	}
}
