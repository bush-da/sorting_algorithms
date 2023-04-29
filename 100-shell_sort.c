#include "sort.h"

/**
 * shell_sort - implement of shell sort algorithm using array
 * @array: array of elements to be sorted
 * @size: the size of the array
 * Return: void
 * Description: function sortes an array of integers in ascending order
 * using the shell sort algorithm using the Knuth sequence
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;
	int temp;


	interval = 1;
	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}
	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
