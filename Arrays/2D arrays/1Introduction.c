/*
2-D arrays are also called as matrices.
synatax:
datatype array_name[rows][columns];
example:
int arr[2][3];
-row is the first index and column is the second index.

1.Static Initialization of 2-D array:
example:
int a[3][3]={1,2,3,4,5,6,7,8,9};
int a[3][3]={{1,2,3},
             {4,5,6},
             {7,8,9}};
OR
int a[][3]={1,2,3,4,5,6,7,8,9};

-int a[][3]: This declares a two-dimensional array named a.
The [3] inside the square brackets indicates that it's an array of arrays 
with each sub-array having 3 elements. 
Since you haven't specified the size of the first dimension (the number of sub-arrays),
the compiler will automatically determine it based on the provided initialization values.

-Yes, that's correct! The declaration int a[][3] allows you to create a two-dimensional array where 
the first dimension (number of rows) can vary, but the second dimension (number of columns) is fixed at 3.
So, you can create arrays with different numbers of rows as long as you keep the second dimension as 3.

2.Dynamic Initialization of 2-D array:
example:
int a[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter a[%d][%d] element: ",i,j);
        scanf("%d",&a[i][j]);
    }
}
*/