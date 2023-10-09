/*
The two codes provided below are both related to arrays in C, but they have significant differences in terms of memory allocation and use. Here are the key differences between the two codes:

--> Code 1: Dynamic Memory Allocation using malloc and Pointers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Error in memory allocation.\n");
        exit(0);
    } 
    else
     {
        printf("Memory successfully allocated using malloc.\n");
        for(i=0;i<n;i++)
        {
            printf("Enter the element %d: ",i+1);
            scanf("%d",ptr+i);
        }
        printf("The elements of array are: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }

        // Memory allocation using malloc
        // Dynamic size based on user input
        // Elements are accessed using pointer arithmetic

        }
    free(ptr); // Memory deallocation using free
    return 0;
}
- This code dynamically allocates memory for an integer array using malloc based on user input for the array size (n).
- It checks if the memory allocation was successful by testing whether ptr is NULL. If allocation fails, it prints an error message and exits the program.
- The user enters values for the array elements, which are stored in memory allocated using malloc.
- It prints the array elements, and after use, it deallocates the dynamically allocated memory using free.


--> Code 2: Static Array
#include <stdio.h>
int main() {
    int i, n, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Directly stores elements in a static array
    for (i = 0; i < n; i++) {
        printf("Enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Prints the array elements
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}
- This code uses a static array with a fixed size of 100 elements.
- The user enters values for the array elements directly into the static array.
- It prints the array elements.

- Key Differences:

1. Dynamic vs. Static Allocation: 
- Code 1 dynamically allocates memory for the array based on user input, allowing for flexible array sizes. 
- Code 2 uses a static array with a fixed size of 100 elements.

2. Memory Management:
- Code 1 uses malloc to allocate memory on the heap and free to deallocate it, which allows for efficient memory management and can handle larger arrays. 
- Code 2 uses a static array, so memory is allocated on the stack, and there's no explicit memory deallocation step needed.

3. Array Access: 
- In Code 1, elements are accessed using pointer arithmetic (e.g., *(ptr + i)), whereas in Code 2, elements are accessed directly (e.g., arr[i]).

--> The choice between dynamic and static allocation depends on the specific requirements of your program. Dynamic allocation provides flexibility but requires explicit memory management, while static allocation is simpler but has fixed size limitations.
*/