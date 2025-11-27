#include <stdio.h>

// function prototype
void birthday(int* age);

int main() {

    // pointer = a variable that stores the memory address of another variable.
    //           benefit : They help avoid wasting memory by allowing you to pass 
    //           the address of a large data structure instead of copying the entire data

    int age = 25;
    int *pAge = &age; // pointer that stores the address of age

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Value of pAge (address): %p\n", pAge);
    printf("Value at address (dereferencing): %d\n\n", *pAge);

    // Call function with pointer (pass by reference)
    printf("Before birthday: %d years old\n", age);
    birthday(pAge);
    printf("After birthday: %d years old\n", age);

    return 0;
}

// gunction that modifies value using pointer
void birthday(int* age) {
    // pass by reference
    (*age)++; // increment the value at the address
}

/*
 * POINTERS:
 * 
 * declaration:
 * datatype *pointerName;
 * 
 * key operators:
 * & = address-of operator (gets memory address)
 * * = dereference operator (gets value at address)
 * 
 * usage:
 * int *ptr = &variable;  // store address
 * *ptr = 10;             // change value at address
 * 
 * benefits:
 * - pass by reference (modify original variable)
 * - memory efficient for large data
 * - dynamic memory allocation
 * - working with arrays and strings
 * 
 * pass by value and pass by reference:
 * - pass by value: Copies the value (original unchanged)
 * - pass by reference: Passes address (original can be modified)
 */