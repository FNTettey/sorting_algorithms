# A repository with the aim of learning and Implementing different sorting alogrithms in c using linked lists and arrays.

## N-O files contain the time complexities of each algorithm
- the Best case
- the average case
- the worst case

### 0-O Bubble sort
compiled with
>  gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
 
### 1-O insertion sort
compiled with
> gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion

### 2-O selection sort
compiled with
> gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
 
### 3-O quick sort
compiled with
> gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick

### 100-O Shell sort
##### Using Knuth sequence
> n+1 = n * 3 + 1
> 1, 4, 13, 40, 121, ...

No time complexity file
>  the complexity is dependent on the size of array and gap
