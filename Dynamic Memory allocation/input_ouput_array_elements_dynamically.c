//WAP to input and output array elements dynamically.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error in memory allocation.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using calloc.\n");
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
    }
    free(ptr);
    return 0;
}

/*
--> In this code, the memory allocation takes place when the calloc function is called.
Here's the relevant part of the code for reference:

ptr = (int*) calloc(n, sizeof(int));

- In this line, the calloc function is called to allocate a block of memory for an array of n integers. The memory allocation occurs immediately when this line is executed. After successful allocation, the pointer ptr points to the beginning of the allocated memory block.

- The statement "Memory successfully allocated using calloc." is printed immediately after the calloc function call to indicate that the memory allocation was successful. This message serves as feedback to the user to confirm that the memory allocation process was completed without errors.

- Subsequently, the program proceeds to input elements into the allocated memory and display those elements. The order of these operations (printing the success message and then inputting/displaying elements) does not affect the timing of memory allocation. Memory is allocated when calloc is called, and the success message is printed once the allocation is confirmed.
*/

/*
--> In this code,
- dynamically allocates memory for an integer array based on user input, reads elements from the user, and then displays those elements. The program uses calloc for memory allocation, which initializes the allocated memory to zero. Here's a summary of the program:

- It prompts the user to enter the size of the array (n).

- It dynamically allocates memory for an array of n integers using calloc. The use of calloc ensures that the allocated memory is initialized to zero.

- It checks if the memory allocation was successful by testing whether ptr is NULL. If allocation fails, it prints an error message and exits the program.

- If memory allocation is successful, it prints a success message and proceeds to input the elements of the array one by one from the user.

- After reading the elements, it displays the elements of the array.

- Finally, it frees the dynamically allocated memory using free(ptr) to release the memory back to the system.
*/

/*
--> Why Check for ptr == NULL: 
if (ptr == NULL) {
    printf("Error in memory allocation.\n");
    exit(0);
}
- The if statement checks whether the pointer ptr is equal to NULL. Let's break down how this works and why it's important in the context of dynamic memory allocation:

1. Memory Allocation with calloc: In this code, we allocate memory for an integer array using the calloc function:

ptr = (int*) calloc(n, sizeof(int));

- If memory allocation is successful, calloc returns a pointer to the first byte of the allocated memory block. This pointer is stored in the ptr variable.

2. Checking for Allocation Failure: However, memory allocation doesn't always succeed. It can fail if there's not enough available memory or for other reasons. When allocation fails, calloc returns NULL to indicate that it couldn't allocate memory.

3.  Why Check for ptr == NULL: The purpose of the if (ptr == NULL) check is to detect whether memory allocation was successful or not. If ptr is equal to NULL, it means that calloc was unable to allocate memory. In this case, the program cannot safely proceed because it doesn't have the memory it needs to work with.

4. Error Handling: When the if condition evaluates to true (i.e., when ptr is NULL), the program prints an error message using printf to inform the user that there was an issue with memory allocation. It then exits the program using exit(0), which terminates the program execution. Exiting the program is a way to gracefully handle the error and prevent the program from continuing to execute with insufficient memory.

In summary, checking whether ptr is equal to NULL is a crucial step in handling dynamic memory allocation. It helps us to detect allocation failures and take appropriate actions to handle errors, ensuring the program's stability and robustness.
*/