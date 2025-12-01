#include <stdio.h>
#include <stdlib.h>

int main() {

    // realloc() = reallocation
    //             resize previously allocated memory
    //             realloc(ptr, bytes)

    int number = 0;

    printf("How many numbers do you want to store?: ");
    scanf("%d", &number);

    // initial allocation using malloc
    int *grades = malloc(number * sizeof(int));

    // check if memory allocation was successful
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // get initial grades from user
    printf("\nEnter %d grades:\n", number);
    for (int i = 0; i < number; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // display initial grades
    printf("\nYour current grades:\n");
    for (int i = 0; i < number; i++) {
        printf("Grade %d: %d\n", i + 1, grades[i]);
    }

    // ask if user wants to add more grades
    int moreGrades = 0;
    printf("\nHow many more grades do you want to add?: ");
    scanf("%d", &moreGrades);

    // resize memory using realloc
    grades = realloc(grades, (number + moreGrades) * sizeof(int));

    // check if reallocation was successful
    if (grades == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // get additional grades
    printf("\nEnter %d more grades:\n", moreGrades);
    for (int i = number; i < number + moreGrades; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // update total number
    number += moreGrades;

    // display all grades
    printf("\nAll your grades:\n");
    for (int i = 0; i < number; i++) {
        printf("Grade %d: %d\n", i + 1, grades[i]);
    }

    // free allocated memory
    free(grades);

    return 0;
}

/*
 * REALLOC (reallocation):
 * 
 * syntax:
 * pointer = realloc(pointer, new_size_in_bytes);
 * 
 * example:
 * int *arr = malloc(5 * sizeof(int));        // allocate for 5 integers
 * arr = realloc(arr, 10 * sizeof(int));      // resize to 10 integers
 * 
 * how it works:
 * - resizes previously allocated memory
 * - can make memory larger or smaller
 * - preserves existing data (when growing)
 * - may move data to new location if needed
 * 
 * important:
 * - returns pointer to resized memory
 * - returns NULL if reallocation fails
 * - original pointer may become invalid
 * - always assign result back to pointer
 * - must free() when done
 * 
 * common pattern:
 * ptr = realloc(ptr, new_size);
 * if (ptr == NULL) {
 *     // Handle error
 * }
 * 
 * use cases:
 * - dynamic arrays that grow/shrink
 * - adding more elements to existing array
 * - reducing memory usage
 */