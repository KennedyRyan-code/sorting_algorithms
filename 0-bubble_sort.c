#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;

	if (array == NULL || size < 2)
		return;

	do {
		swapped = 0;

		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				int temp = array[i - 1];

				array[i - 1] = array[i];
				array[i] = temp;

				print_array(array, size);

				swapped = 1;
			}
		}
	} while (swapped);
}
