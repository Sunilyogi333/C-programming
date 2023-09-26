// #include<stdio.h>

// int main()
// {
//     printf("hello ");
//     printf("world\n");
//     int a=1;
//     printf("%d\n", a);
//     a++;
//     printf("%d\n", a);
//     a++;
//     printf("%d\n", a);
//     a++;
//     printf("%d\n", a);
//     a++;
//     printf("%d\n", a);
//     return 0;
// }

// loops are used to repeat similar part of a code snippet efficiently

#include<stdio.h>

int main()
{
    printf("Hello ");
    printf("world\n");
    int a;
    scanf("%d", &a);

    while (a<10)
    {
        printf("%d\n", a);
        a++;
    }
    

    return 0;
}