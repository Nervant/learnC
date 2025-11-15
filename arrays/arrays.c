#include <stdio.h>

// array = a fixed-size collection of elements of the same data type
//              (similar to a variable, but it holds more than 1 value)

int main(){

    // declare and initialize an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // calculate the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array size: %d elements\n\n", size);

    // access and print individual elements
    printf("First element: %d\n", numbers[0]);
    printf("Second element: %d\n", numbers[1]);
    printf("Third element: %d\n", numbers[2]);

    // modify an element
    numbers[0] = 99;
    printf("\nModified first element: %d\n", numbers[0]);

    // display all elements using a for loop
    printf("\nAll elements in the array:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    // example of a character array (string)
    char name[] = "Hello World";
    printf("\n\nString example: %s\n", name);

    return 0;
}

/*
 * ARRAYS IN C:
 *
 * syntax:
 * datatype arrayName[size];
 * 
 * examples:
 * int numbers[5];                 // array of 5 integers (uninitialized)
 * int scores[3] = {90, 85, 100};  // array with values
 * char name[] = "Nervant";            // array of characters (string)
 * 
 * calculate array size:
 * int size = sizeof(array) / sizeof(array[0]);
 * 
 * key points:
 * 1. index starts at 0
 * 2. each element must be the same data type
 * 3. arrays have a fixed size (cannot grow or shrink)
 * 4. use loops to process array elements
 */
