#include "sort.h"

/**
 *  insertion_sort_list - sorts a doubly linked list of integers 
 *          in ascending orderusing the Insertion sort algorithm
 * @list: a doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
listint_t *first = NULL;
listint_t *second = NULL;
listint_t *next = NULL;
listint_t *temp = NULL;
listint_t *hold = NULL;
first = *list;
second = first->next;
while (first->next != NULL)
{
/*Checking if first two numbers need to be swapped*/
if (first->prev == NULL && first > second)
{
next = second->next;
second->next = first;
second->prev = NULL;
first->next = next;
first->prev = second;
next->prev = first;
print_list(*list);
}
else
{
/*Code that should do majority of the swapping */
while (first > second)
{
temp = first->prev;
next = second->next;
second->next = first;
temp->next = second;
second->prev = temp;
first->next = next;
first->prev = second;
next->prev = first;
print_list(*list);
hold = second;
second = first;
first = hold;
 
/*checking if more swapping is needed */
if (first < temp)
{
hold = first;
first = temp;
second = hold;
continue;
}
}
}
first = first->next;
second = second->next;
}

/* checking last number */ 
if (first->next == NULL)
{
if (first->prev > first)
{
temp = first->prev->prev;
second = first->prev;
first->prev = temp;
first->next = second;
second->next = NULL;
second->prev = first;
temp->next = first;
print_list(*list);

hold = first;
first = temp;
second = hold;
while (first->n > second->n)
{
if (first->prev == NULL)
{
next = second->next;
second->prev = NULL;
second->next = *list;
first->prev = second;
first->next = next;
*list = second;
print_list(*list);
break;
}
temp = first->prev;
next = second->next;
second->prev = temp;
second->next = first;
first ->prev = second;
first->next = next;
temp->next = second;
print_list(*list);
hold = second;
first = temp;
second = hold;
}
}
}
}

