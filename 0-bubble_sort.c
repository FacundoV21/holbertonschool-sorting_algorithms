#include <stdlib.h>
#include "sort.h"

void
bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	for (i = size -1 ; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j +1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}