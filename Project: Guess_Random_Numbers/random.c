#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1; //confused // Generates a random number between 1 to 100
    // printf("The number is %d\n", number);
    // keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number guess please \n");
        }
        else if (guess < number)
        {
            printf("higher number guess please \n");
        }
        else
        {
            printf("Congratulations !,You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}
