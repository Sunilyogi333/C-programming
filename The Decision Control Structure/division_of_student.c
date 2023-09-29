/*WAP to input five marks of a student based on percentage, display the division of the student.
>80% - Distinction
>60%-79% - First Division
>50%-69% -Second Division
>40%-49% Third Division
<40% - Fail
*/
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    float per=(s1+s2+s3+s4+s5)/5.0;
    if(per>=80)
        printf("%.2f percentage: Distinction",per);
    else if(per>=60)
        printf("%.2f percentage: First Division",per);
    else if(per>=50)
        printf("%.2f percentage: Second Division",per);
    else if(per>=40)
        printf("%.2f percentage: Third Division",per);
    else
        printf("Fail\n");
        return 0;
}