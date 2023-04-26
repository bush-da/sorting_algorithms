#include "sort.h"

/**
 * swap - takes two integer and swaps them
 * @a: the first argument
 * @b: the second argument
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array of integer in ascending
 * order using the Selection sort algorithm
 * @array: array of unsorted integers
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int flag;

	i = 0;
	while (i < size)
	{
		min_index = i;
		j = i + 1;
		while (j  < size)
		{
			if (array[min_index] > array[j])
			{
				min_index = j;
				flag = 1;
			}
			j++;
		}
		swap(array + i, array + min_index);
		if (flag == 1)
			print_array(array, size);
		flag = 0;
		i++;
	}
}
