#include "sort.h"
/**
 *  selection_sort- sorts an array of integers
 *  in ascending orderusing the selection sort algorithm
 * @array: a pointer to the array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
if (size > 1)
{
size_t i, j, smallest;
int temp;
for (i = 0; i < size - 1; i++)
{
smallest = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[smallest])
{
smallest = j;
}
}
if (smallest != i)
{
temp = array[i];
array[i] = array[smallest];
array[smallest] = temp;
print_array(array, size);
}
}
}
}
