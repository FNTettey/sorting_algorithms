#include "sort.h"
/**
 *  counting_sort- sorts an array of integers
 *  in ascending order using the counting sort algorithm
 * @array: a pointer to the array
 * @size: the size of the array
 */
void counting_sort(int *array, size_t size)
{
if (size > 1)
{
size_t i, max, value;
int *count, largest;
int temp[11];
for (i = 0; i < 11; i++)
temp[i] = 0;
/* finding largest value */
largest = array[0];
for (i = 1; i < size; i++)
{
if (array[i] > largest)
largest = array[i];
}
max = largest;
/* creating & initialising the counting array */
count = (int *)malloc(max + 1 * sizeof(int));
if (count != NULL)
{
for (i = 0; i <= max; i++)
count[i] = 0;
}
/* Storing the number of occurances of each element in the count array */
for (i = 0; i < size; i++)
count[array[i]]++;
/* updating the counting array */
for (i = 0; i <= max; i++)
count[i] = count[i] + count[i - 1];
print_array(count, max + 1);
/* sorting */
for (i = 0; i < size; i++)
{
value = array[i];
temp[count[value] - 1] = value;
count[value]++;
}
free(count);
/* putting sorted values in original array */
for (i = 0; i < size; i++)
array[i] = temp[i];
}
}
