#include "sort.h"

/**
 * bubble_sort - sort numbers using bubble sort algorithm
 * @array: array of number to be sorted
 * @size: the size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, z, temp;

	i = (int)size - 1;

	while (i >= 0)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				for (z = 0; z < (int)size; z++)
				{
					if (z == (int)size - 1)
					{
						printf("%d", array[z]);
						printf("\n");
						break;
					}
					printf("%d, ", array[z]);
				}
			}
		}
		i--;
	}
}
