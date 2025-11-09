#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // while loop = continue some code WHILE the condition remains true
    //              condition must be true for us to enter while loop

    // ========== EXAMPLE 1: SIMPLE COUNTER ==========
    
    int count = 1;
    
    printf("=== Counting from 1 to 5 ===\n");
    while (count <= 5) {
        printf("%d\n", count);
        count++;
    }
    printf("\n");

    // ========== EXAMPLE 2: INPUT VALIDATION ==========
    
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    // keep asking until user enters a name
    while (strlen(name) == 0) {
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s!\n\n", name);

    // ========== EXAMPLE 3: GAME LOOP ==========
    
    bool isRunning = true;
    char response = '\0';

    printf("=== Simple Game Loop ===\n");
    while (isRunning) {
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response); // space before %c removes \n from buffer

        if (response != 'Y' && response != 'y') {
            isRunning = false;
        }
    }
    
    printf("You exited the game\n");

    return 0;
}

/*
 * WHILE LOOP STRUCTURE:
 * 
 * while (condition) {
 *     // code to repeat
 * }
 * 
 * how it works:
 * 1. check condition
 * 2. if true, execute code block
 * 3. repeat from step 1
 * 4. if false, exit loop
 * 
 * IMPORTANT:
 * - condition is checked BEFORE entering the loop
 * - if condition is initially false, loop never executes
 * - make sure condition eventually becomes false (avoid infinite loops!)
 * - use break; to exit loop early
 * 
 * common uses:
 * - input validation
 * - game loops
 * - menu systems
 * - processing until a condition is met
 */