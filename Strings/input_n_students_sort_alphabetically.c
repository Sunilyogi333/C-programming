//WAP to input name of n student and sort them alphabetically.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100][50],temp[50];
    int i,j,n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the names of %d students:\n",n);
    
    /*
    When you use fgets after scanf, it can consume the newline character ('\n') left in the input buffer by scanf. To fix this, you can add an extra getchar() to consume the newline character before reading the names.
   */

    // Consume the newline character left by scanf
    getchar(); // to clear the buffer

    // input
    for(i=0;i<n;i++)
    {
        printf("Enter %d student name: ",i+1);
        fgets(name[i],sizeof(name[i]),stdin);
    }
    printf("\n");
    // given input
    printf("The names of %d students are:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%s",name[i]);
    }
    printf("\n");
    // sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    // sorted output
    printf("The names of %d students after sorting are:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%s",name[i]);
    }
    return 0;
}

/*
Note:
--> In the code, we use getchar() after scanf to consume the newline character ('\n') that is left in the input buffer after the user presses the Enter key to input the number of students. This is important because fgets reads characters until it encounters a newline character, and if there's a stray newline character left in the input buffer, it can cause unexpected behavior when reading the names using fgets.

Here's how it works:

After you input the number of students with scanf, a newline character ('\n') is left in the input buffer. This newline character is not consumed by scanf, so it remains in the input buffer.

When the program proceeds to the next input operation, which is fgets to read the names, it can immediately encounter the newline character left in the buffer from the previous scanf operation.

If fgets encounters a newline character immediately, it may read an empty string for the name of the first student, which is not what you want.

To prevent this issue, we use getchar() after scanf to explicitly consume the newline character from the input buffer. This ensures that the subsequent fgets call reads the names correctly, starting with the first student's name.
*/

/*
--> getchar() 
-The getchar() function in C is used to read a single character from the standard input (usually the keyboard). It reads the next character from the input stream (stdin) and returns it as an integer, which represents the character's ASCII value.

Here's the basic syntax of getchar():

c
int getchar(void);

-> Common uses of getchar() include:

1. Reading Individual Characters: You can use getchar() to read individual characters one at a time from the user or from a file.

2. Consuming Newline Characters: It is often used to consume newline characters ('\n') left in the input buffer after other input operations (e.g., scanf) to ensure that subsequent input operations behave as expected.

For example, after reading an integer using scanf, you might use getchar() to consume the newline character left in the input buffer, like this:

{
int num;
char newline;

scanf("%d", &num);
newline = getchar(); // Consume the newline character
} 

- This prevents the newline character from interfering with subsequent input operations, such as reading strings with fgets.

- Keep in mind that getchar() returns an integer to accommodate all possible characters, including control characters. To work with characters as characters (not integers), you can assign the result of getchar() to a char variable. For example:

{
char ch = getchar();
}
This way, you can work with the character directly, and ch will contain the character itself (not its ASCII value).
*/