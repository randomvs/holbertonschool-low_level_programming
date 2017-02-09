#include "sort.h"

/**
 * selection_sort - use selection sort on an array
 * @array: array of ints
 * @size: size of array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t index, second, holder;
	int temp;

	if (array == NULL)
		return;
	index = 0;
	while (index < size)
	{
		second = index + 1;
		temp = array[index];
		holder = index;
		while (second < size)
		{
			if (temp > array[second])
			{
				temp = array[second];
				holder = second;
			}
			second++;
		}
		if (holder != index)
		{
			array[holder] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
		index++;
	}

}
