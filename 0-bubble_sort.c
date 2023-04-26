#include "sort.h"

/**
 * swap - swap two integers
 * @a1: The first integer to swap
 * @a2: The second integer to swap
 * Return: void
 */
void swap(int *a1, int *a2)
{
	int temp;

	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

/**
 * bubble_sort - sort numbers using bubble sort algorithm
 * @array: array of number to be sorted
 * @size: the size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len;
	int flag;

	if (array == NULL || size < 2)
		return;
	len = size;
	flag = 1;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < len - 1; i++)
		{

			if (array[i + 1] < array[i])
			{

				flag = 1;
				swap(array + i + 1, array + i);
				print_array(array, size);
			}
		}
		len--;
	}
}
