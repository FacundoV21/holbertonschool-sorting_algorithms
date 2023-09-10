#include "sort.h"
void
selection_sort(int *array, size_t size)
{
	unsigned int i, j, n;
	int x;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[n] > array[j])
				n = j;
		}
		if (n != i)
		{
			x = &array[i];
			&array[i] = &array[n];
			&array[n] = x;
			print_array(array, size);
		}
	}

}
