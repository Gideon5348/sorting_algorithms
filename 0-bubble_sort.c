#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

	for (j = 0; j < size - 1 - i; j++)
	{
		if (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;

			/* Set swapped flag to 1 to indicate swap occurred */
			swapped = 1;

			/* Print the array after each swap */
			print_array(array, size);
		}
	}

	if (swapped == 0)
		break;
	}
}
