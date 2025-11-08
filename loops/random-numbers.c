#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    // pseudo-random = appear random but are determined by a 
    //                 mathematical formula that uses a seed value 
    //                 to generate a predictable sequence of numbers.
    //                 advanced: mersenne twister or /dev/random

    // seed the random number generator with current time
    // this ensures different numbers each time program runs
    srand(time(NULL));

    // ========== EXAMPLE 1: random number between 1 and 6 (dice) ==========
    
    printf("=== Rolling a dice ===\n");
    int dice = (rand() % 6) + 1;
    printf("You rolled: %d\n\n", dice);

    // ========== EXAMPLE 2: random number in a range ==========
    
    int min = 1;
    int max = 100;

    printf("=== Three random numbers (1-100) ===\n");
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d\n\n", randomNum1, randomNum2, randomNum3);

    // ========== EXAMPLE 3: random numbers in a loop ==========
    
    printf("=== 5 random numbers (1-10) ===\n");
    for (int i = 0; i < 5; i++) {
        int num = (rand() % 10) + 1;
        printf("%d ", num);
    }
    printf("\n\n");

    // ========== EXAMPLE 4: random floating point number ==========
    
    printf("=== Random float (0.0 to 1.0) ===\n");
    float randomFloat = (float)rand() / RAND_MAX;
    printf("%.4f\n\n", randomFloat);

    // ========== EXAMPLE 5: random choice from options ==========
    
    printf("=== Random coin flip ===\n");
    int coin = rand() % 2; // 0 or 1
    if (coin == 0) {
        printf("Heads!\n");
    }
    else {
        printf("Tails!\n");
    }

    return 0;
}

/*
 * RANDOM NUMBERS IN C:
 * 
 * functions needed:
 * #include <stdlib.h>  // for rand() and srand()
 * #include <time.h>    // for time()
 * 
 * key functions:
 * srand(seed) - sets the random seed (do once at start)
 * rand()      - returns random number (0 to RAND_MAX)
 * 
 * common pattern:
 * srand(time(NULL));  // seed with current time
 * 
 * generate number in range [min, max]:
 * int num = (rand() % (max - min + 1)) + min;
 * 
 * formula breakdown:
 * rand() % (max - min + 1)  →  gives 0 to (max-min)
 * + min                      →  shifts to min to max
 * 
 * Examples:
 * 1-6:   (rand() % 6) + 1
 * 1-100: (rand() % 100) + 1
 * 10-20: (rand() % 11) + 10
 * 
 * note: these are pseudo-random numbers
 * for cryptography, use specialized libraries
 */