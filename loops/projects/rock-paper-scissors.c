#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {

    // ROCK PAPER SCISSORS

    // seed random number generator
    srand(time(NULL));

    char playerChoice;
    int computerChoice;
    bool playAgain = true;
    char response;

    printf("===== ROCK PAPER SCISSORS =====\n\n");

    // game loop = continue until player wants to quit
    while (playAgain) {
        // get player's choice
        printf("Choose one:\n");
        printf("'r' for Rock\n");
        printf("'p' for Paper\n");
        printf("'s' for Scissors\n");
        printf("Enter your choice: ");
        scanf(" %c", &playerChoice);

        // validate input
        if (playerChoice != 'r' && playerChoice != 'p' && playerChoice != 's') {
            printf("Invalid choice! Please try again.\n\n");
            continue; // skip to next iteration
        }

        // computer makes random choice (0 = Rock, 1 = Paper, 2 = Scissors)
        computerChoice = rand() % 3;

        // display choices
        printf("\nYou chose: ");
        switch (playerChoice) {
            case 'r':
                printf("Rock\n");
                break;
            case 'p':
                printf("Paper\n");
                break;
            case 's':
                printf("Scissors\n");
                break;
        }

        printf("Computer chose: ");
        switch (computerChoice) {
            case 0:
                printf("Rock\n");
                break;
            case 1:
                printf("Paper\n");
                break;
            case 2:
                printf("Scissors\n");
                break;
        }

        // determine winner
        printf("\n");
        if ((playerChoice == 'r' && computerChoice == 0) ||
            (playerChoice == 'p' && computerChoice == 1) ||
            (playerChoice == 's' && computerChoice == 2)) {
            printf("It's a TIE!\n");
        }
        else if ((playerChoice == 'r' && computerChoice == 2) ||
                 (playerChoice == 'p' && computerChoice == 0) ||
                 (playerChoice == 's' && computerChoice == 1)) {
            printf("YOU WIN!\n");
        }
        else {
            printf("YOU LOSE!\n");
        }

        // ask if player wants to play again
        printf("\nPlay again? (y/n): ");
        scanf(" %c", &response);

        if (response != 'y' && response != 'Y') {
            playAgain = false;
        }

        printf("\n");
    }

    printf("Thanks for playing!\n");

    return 0;
}