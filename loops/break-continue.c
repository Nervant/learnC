#include <stdio.h>

int main() {

    // break = break out of a loop (STOP)
    // continue = skip current cycle of a loop (SKIP)

    // ========== BREAK EXAMPLE 1: stop at specific number ==========
    
    printf("=== BREAK: Stop when reaching 5 ===\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // exit loop completely
        }
        printf("%d\n", i);
    }
    printf("Loop stopped!\n\n");

    // ========== BREAK EXAMPLE 2: search for a number ==========
    
    int numbers[] = {10, 20, 30, 40, 50};
    int target = 30;
    
    printf("=== BREAK: Searching for %d ===\n", target);
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            printf("Found %d at index %d!\n", target, i);
            break; // stop searching once found
        }
    }
    printf("\n");

    // ========== CONTINUE EXAMPLE 1: skip odd numbers ==========
    
    printf("=== CONTINUE: Print only even numbers ===\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // skip odd numbers
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // ========== CONTINUE EXAMPLE 2: skip specific value ==========
    
    printf("=== CONTINUE: Skip number 5 ===\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // skip this iteration
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // ========== COMBINED EXAMPLE ==========
    
    printf("=== COMBINED: Skip 3, stop at 8 ===\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; // skip 3
        }
        if (i == 8) {
            break; // stop at 8
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*
 * BREAK vs CONTINUE:
 * 
 * BREAK:
 * - Immediately exits the loop
 * - Execution continues after the loop
 * - Use when: you want to stop the loop completely
 * 
 * CONTINUE:
 * - Skips the rest of current iteration
 * - Goes to next iteration of the loop
 * - Use when: you want to skip specific cases but keep looping
 * 
 * example:
 * for (i = 1; i <= 5; i++) {
 *     if (i == 3) break;     // Output: 1 2 (stops at 3)
 *     printf("%d ", i);
 * }
 * 
 * for (i = 1; i <= 5; i++) {
 *     if (i == 3) continue;  // Output: 1 2 4 5 (skips 3)
 *     printf("%d ", i);
 * }
 * 
 * common uses:
 * - break: exit search when found, exit on error, menu exit
 * - continue: skip invalid data, filter values, skip processing
 */