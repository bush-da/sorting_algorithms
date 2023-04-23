#include "sort.h"

/**
 * bubble_sort - sort numbers using bubble sort algorithm
 * @array: array of number to be sorted
 * @size: the size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len, temp;
	int flag;

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
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		len--;
	}
}
