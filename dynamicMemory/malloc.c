#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc() = a function in C that dynamically allocates 
    //            a specified number of bytes in memory

    int number = 0;

    printf("How many numbers do you want to store?: ");
    scanf("%d", &number);

    // dynamically allocate memory for array of integers
    int *grades = malloc(number * sizeof(int));

    // check if memory allocation was successful
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // get grades from user
    printf("\nEnter %d grades:\n", number);
    for (int i = 0; i < number; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // display grades
    printf("\nYour grades:\n");
    for (int i = 0; i < number; i++) {
        printf("Grade %d: %d\n", i + 1, grades[i]);
    }

    // free allocated memory
    free(grades);
    // avoid dangling pointers
    grades == NULL;

    return 0;
}

/*
 * MALLOC (memory allocation):
 * 
 * syntax:
 * pointer = malloc(size_in_bytes);
 * 
 * common pattern:
 * datatype *ptr = malloc(n * sizeof(datatype));
 * 
 * example:
 * int *arr = malloc(5 * sizeof(int));     // array of 5 integers
 * char *str = malloc(50 * sizeof(char));  // string of 50 characters
 * 
 * important:
 * - returns pointer to allocated memory
 * - returns NULL if allocation fails (always check!)
 * - memory is NOT initialized (contains garbage values)
 * - must free() memory when done to avoid memory leaks
 * - allocates memory on the heap (not stack)
 * 
 * benefits:
 * - dynamic array sizes (determined at runtime)
 * - flexible memory usage
 * - can allocate large amounts of memory
 */