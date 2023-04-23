#include "sort.h"

/**
 * bubble_sort - sort numbers using bubble sort algorithm
 * @array: array of number to be sorted
 * @size: the size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, z, temp, flag;

	i = (int)size - 1;
	flag = 0;

	while (i >= 0)
	{
		for (j = 0; j < i; j++)
		{
			flag = 1;
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
		if (flag == 0)
			break;
		i--;
	}
}
