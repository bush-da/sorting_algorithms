#include "sort.h"

/**
 * bubble_sort - sort numbers using bubble sort algorithm
 * @array: array of number to be sorted
 * @size: the size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	int flag;


	flag = 0;
	i = (int)size - 1;

	while (i >= 0)
	{
		for (j = 0; j < i; j++)
		{

			if (array[j + 1] < array[j])
			{

				flag = 1;
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			break;
		}
		i--;
	}
}
