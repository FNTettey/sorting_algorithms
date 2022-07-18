#include "sort.h"
/**
 *  shell_sort- sorts an array of integers
 *  in ascending order using the shell sort algorithm
 * @array: a pointer to the array
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
size_t gap = 1;
size_t i, j;
int temp;
/* finding initial gap */
while (gap < size)
gap = gap * 3 + 1;

gap = gap / 3;
while (gap > 0)
{
for (i = gap; i < size; i++)
{
temp = array[i];
for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
{
array[j] = array[j - gap];
}
array[j] = temp;
}
gap = gap / 3;
print_array(array, size);
}
}
