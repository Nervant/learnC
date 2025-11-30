#include <stdio.h>
#include <stdlib.h>

int main() {

    // calloc() = contiguous allocation.
    //            allocates memory dynamically and sets all allocated bytes to 0
    //            malloc() is faster, but calloc() leads to less bugs
    //            calloc(#, size)

    int number = 0;

    printf("How many numbers do you want to store?: ");
    scanf("%d", &number);

    // dynamically allocate memory using calloc
    int *scores = calloc(number, sizeof(int));

    // check if memory allocation was successful
    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // display initial values (all zeros)
    printf("\nInitial values:\n");
    for (int i = 0; i < number; i++) {
        printf("Scores %d: %d\n", i + 1, scores[i]);
    }

    // get scores from user
    printf("\nEnter %d scores:\n", number);
    for (int i = 0; i < number; i++) {
        printf("Scores %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // display scores
    printf("\nYour scores:\n");
    for (int i = 0; i < number; i++) {
        printf("Scores %d: %d\n", i + 1, scores[i]);
    }

    // free allocated memory
    free(scores);
    // avoid dangling pointers
    scores == NULL;

    return 0;
}

/*
 * CALLOC (contiguous allocation):
 * 
 * syntax:
 * pointer = calloc(number_of_elements, size_of_each_element);
 * 
 * example:
 * int *arr = calloc(5, sizeof(int));      // array of 5 integers
 * char *str = calloc(50, sizeof(char));   // string of 50 characters
 * 
 * malloc() vs calloc():
 * malloc(n * sizeof(int))  - faster, but uninitialized (garbage values)
 * calloc(n, sizeof(int))   - slower, but initializes all to 0
 * 
 * important:
 * - returns pointer to allocated memory
 * - returns NULL if allocation fails (always check!)
 * - all bytes set to 0 (initialized)
 * - must free() memory when done
 * - takes 2 parameters (number of elements, size of each)
 * 
 * benefits:
 * - safer than malloc() (no garbage values)
 * - less bugs
 */