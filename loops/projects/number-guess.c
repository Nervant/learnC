#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // NUMBER GUESSING GAME

    // seed the random number generator
    srand(time(NULL));

    // generate random number between 1 and 100
    int min = 1;
    int max = 100;
    int randomNumber = (rand() % (max - min + 1)) + min;
    int guess = 0;
    int attempts = 0;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("I'm thinking of a number between 1 and 100...\n");
    printf("Can you guess it?\n\n");

    // game loop = continue until user guesses correctly
    while (guess != randomNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber) {
            printf("Too low! Try again.\n\n");
        }
        else if (guess > randomNumber) {
            printf("Too high! Try again.\n\n");
        }
        else {
            printf("\nCongratulations! You guessed it!\n");
            printf("The number was %d\n", randomNumber);
            printf("It took you %d attempts.\n", attempts);
        }
    }

    return 0;
}