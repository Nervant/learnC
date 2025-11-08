#include <stdio.h>

int main() {

    // for loop = repeat some code a limited # of times
    //            for(initialization; condition; update)

    // ========== EXAMPLE 1: count up ==========
    
    printf("=== Counting from 1 to 10 ===\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    printf("\n");

    // ========== EXAMPLE 2: count down ==========
    
    printf("=== Countdown from 10 to 1 ===\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    printf("Blast off!\n\n");

    // ========== EXAMPLE 3: count by 2s ==========
    
    printf("=== Even numbers from 0 to 20 ===\n");
    for (int i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");

    // ========== EXAMPLE 4: multiplication table ==========
    
    int number = 5;
    printf("=== Multiplication table for %d ===\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\n");

    // ========== EXAMPLE 5: sum of numbers ==========
    
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("Sum of 1 to 100: %d\n", sum);

    return 0;
}

/*
 * FOR LOOP STRUCTURE:
 * 
 * for (initialization; condition; update) {
 *     // code to repeat
 * }
 * 
 * parts:
 * 1. initialization - runs once at the start (int i = 0)
 * 2. condition - checked before each iteration (i < 10)
 * 3. update - runs after each iteration (i++)
 * 
 * execution order:
 * 1. initialize
 * 2. check condition
 * 3. execute code block
 * 4. update
 * 5. repeat from step 2
 * 
 *common patterns:
 * i++     increment by 1
 * i--     decrement by 1
 * i += 2  increment by 2
 * i *= 2  multiply by 2
 * 
 * use for loops when:
 * - you know how many iterations you need
 * - you need a counter variable
 * - you're iterating through arrays
 */