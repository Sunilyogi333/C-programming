/*
Dynamic Memory Allocation
- In Static Memory Allocation, memory is allocated at compile time, that can’t be modified while executing   program and is generally used in array.
- In Dynamic Memory Allocation, memory is allocated at run time, that can be modified while executing program and is generally used in linked list.
- Dynamic Memory Allocation is done using pointers in C.
- Dynamic Memory Allocation functions are defined in “stdlib.h” header file.
- Dynamic Memory Allocation functions are used to allocate memory at run time.
- Dynamic Memory Allocation functions return a void pointer.

-There are four library functions defined in stdlib.h to implement dynamic memory allocation in C Programming.
a. malloc()
b. calloc()
c. realloc()
d. free()

a. malloc() Function
- malloc() or "memory allocation" method is used to dynamically allocate a single large block of memory with
  the specified size.
- It returns a pointer of type void which can be cast into a pointer of anytype.
- It initializes each block with default garbage value.
- On success, it returns base address of allocated memory block else returns NULL value.

- Syntax:
  malloc(byte-size);
  pointer_varaible = (cast-type*) malloc(byte-size);

  Example:
  int *ptr;
  ptr = (cast-type*) malloc(byte-size)
  ptr = (int*) malloc(n * sizeof(int));
  for n=5.
  ptr = (int*) malloc(5 * sizeof(int));

  ptr = (float*) malloc(100 * sizeof(float));
  ptr = (char*) malloc(100 * sizeof(char));
  ptr = (int*) malloc(30 * sizeof(int));

b. calloc() Function
- calloc() or "contiguous allocation" method is used to dynamically allocate the specified number of blocks of
  memory of the specified type.
- It initializes each block with a default value ‘0’.

- On success, it returns the base address of allocated memory block else returns NULL value.
- Syntax:
  calloc(no_of_block, block-size);
  pointer_variable = (cast-type*) calloc(no_of_block, block-size);

    Example:
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    for n=5.
    ptr = (int*) calloc(5, sizeof(int));
     
    ptr = (float*) calloc(100, sizeof(float));
    ptr = (char*) calloc(100, sizeof(char));
    ptr = (int*) calloc(30, sizeof(int));

c. realloc() Function
- realloc() or "re-allocation" method is used to dynamically change the memory allocation of a previously
  allocated memory with the help of calloc() or malloc() functions.
- re-allocation of memory maintains the already present value and new blocks will be initialized with default garbage value.

- Syntax:
  realloc(ptr, newSize);
  pointer_variable = (cast-type*) realloc(ptr, newSize);

  Example:
  int *ptr;
  ptr = (int*) malloc(5 * sizeof(int));
  ptr = (int*) realloc(ptr, 10 * sizeof(int));

  ptr = (float*) realloc(ptr, 100 * sizeof(float));
  ptr = (char*) realloc(ptr, 100 * sizeof(char));
  ptr = (int*) realloc(ptr, 30 * sizeof(int));

d. free() Function
- free() method is used to dynamically de-allocate the memory allocated by calloc() or malloc() methods.
- Syntax:
  free(ptr);

  Example:
  int *ptr;
  
  ptr = (int*) malloc(5 * sizeof(int));
  free(ptr);

  ptr = (float*) malloc(100 * sizeof(float));
  free(ptr);

  ptr = (char*) malloc(100 * sizeof(char));
  free(ptr);

  ptr = (int*) malloc(30 * sizeof(int));
  free(ptr);

*/