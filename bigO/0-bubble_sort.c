#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int aux = 0;
	size_t i;

	for (i = 1; array[i - 1] && i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
			aux = array[i - 1];
			array[i - 1] = array[i];
			array[i] = aux;
			printf("%lu\n", i);
		}
		/*if ((i % 2 != 0) && (i != 1))*/
			/*print_array(array, size);*/
	}
}
