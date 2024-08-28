#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int no_of_guesses = 0;
    int number;

    // printf("Enter the number: \n");
    srand(time(NULL));

    int random_number = rand() % 100 + 1;

    // printf("Random number between 1 and 100: %d\n", random_number);

    do
    {
        printf("Guess the Number: ");
        scanf("%d", &number);
        if (number < random_number)
        {
            printf("Higher number Please!\n");
        }
        else if (number > random_number)
        {
            printf("Lower number Please!\n");
        }
        else
        {
            printf("Congratulations!\n");
        }
        no_of_guesses++;
    } while (number != random_number);
    printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}