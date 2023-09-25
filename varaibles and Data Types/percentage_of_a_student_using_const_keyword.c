//WAP to calculate percentage of a student using const keyword
#include<stdio.h>
int main()
{
    int obt_marks;
    float percentage;
    const int total_marks = 100;

    printf("Enter the obtained marks: ");
    scanf("%d", &obt_marks);
    percentage = (float)obt_marks/total_marks*100;
    printf("Percentage = %.2f", percentage);
    return 0;
}