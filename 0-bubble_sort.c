#include "sort.h"


/**
 * bubble_sort - bubble sort
 * @array: pointer to array
 * @size: elements
*/
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
short int moved;
int tmp;

do {
	moved = 0;
	for (i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
			tmp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = tmp;
			moved = i;
			print_array(array, len);
		}
	}
	size = moved;
} while (size >= 1);

}
