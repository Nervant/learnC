#include <stdio.h>
#include <stdbool.h>

// function prototype = provide the compiler with information about a function's:
//                      name, return type, and parameters before its actual definition.
//                      enables type checking and allows functions to be used before
//                      they're defined.
//                      improves readability, organization, and helps prevent errors.

// function prototypes (declarations)
void hello(char name[], int age);
bool ageCheck(int age);
int multiply(int a, int b);
double calculateArea(double radius);

int main() {

    char name[] = "Bro";
    int age = 25;
    
    // call hello function
    hello(name, age);
    
    // call ageCheck function
    if (ageCheck(age)) {
        printf("You are an adult!\n");
    }
    else {
        printf("You are a minor!\n");
    }
    
    // call multiply function
    int result = multiply(5, 7);
    printf("5 x 7 = %d\n", result);
    
    // call calculateArea function
    double area = calculateArea(5.0);
    printf("Area of circle with radius 5: %.2lf\n", area);

    return 0;
}

// function definitions
void hello(char name[], int age) {
    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
}

bool ageCheck(int age) {
    return age >= 18;
}

int multiply(int a, int b) {
    return a * b;
}

double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

/*
 * FUNCTION PROTOTYPES:
 * 
 * syntax:
 * return_type function_name(parameter_types);
 * 
 * example:
 * int add(int, int);           // parameter names optional
 * int add(int a, int b);       // parameter names included (better readability)
 * 
 * benefits:
 * 1. allows functions to be called before they're defined
 * 2. compiler can check if function calls match declarations
 * 3. better code organization (all declarations at top)
 * 4. required when functions call each other
 * 
 * best Practice:
 * - put prototypes at the top of the file or in header files
 * - put function definitions after main() or in separate files
 */