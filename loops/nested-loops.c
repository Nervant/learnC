#include <stdio.h>

int main() {

    // nested loop = a loop inside another loop

    // ========== EXAMPLE 1: simple pattern ==========
    
    printf("=== Simple Pattern ===\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    printf("\n");

    // ========== EXAMPLE 2: multiplication table ==========
    
    printf("=== Multiplication Table ===\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%4d", i * j); // %4d for alignment
        }
        printf("\n");
    }
    printf("\n");

    // ========== EXAMPLE 3: rectangle pattern ==========
    
    int rows = 5;
    int cols = 10;
    
    printf("=== Rectangle Pattern ===\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // ========== EXAMPLE 4: right triangle pattern ==========
    
    printf("=== Right Triangle Pattern ===\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // ========== EXAMPLE 5: number pyramid ==========
    
    printf("=== Number Pyramid ===\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*
 * NESTED LOOPS:
 * 
 * structure:
 * for (outer_init; outer_condition; outer_update) {
 *     for (inner_init; inner_condition; inner_update) {
 *         // code executes outer * inner times
 *     }
 * }
 * 
 * how it works:
 * - outer loop runs once
 * - inner loop completes ALL iterations
 * - outer loop increments
 * - inner loop completes ALL iterations again
 * - repeat...
 * 
 * example:
 * for (i = 1; i <= 3; i++) {      // Runs 3 times
 *     for (j = 1; j <= 2; j++) {  // Runs 2 times per outer loop
 *         // This runs 3 * 2 = 6 times total
 *     }
 * }
 * 
 * common uses:
 * - 2D arrays / matrices
 * - patterns and shapes
 * - tables
 * - grid-based games
 * - coordinate systems
 * 
 * performance note:
 * - be careful with nested loops (can be slow)
 * - 3 nested loops with 100 iterations each = 1,000,000 operations!
 */