#include <stdio.h>

// variable scope = Refers to where a variable is recognized and accessible.
//                  Variables can share the same name if
//                  they're in different scopes {}

// global variable = accessible everywhere
int globalVar = 100;

void function1();
void function2();
void showScope();

int main() {

    // local variable = only accessible in main()
    int localVar = 50;
    
    printf("=== MAIN FUNCTION ===\n");
    printf("Local variable in main: %d\n", localVar);
    printf("Global variable in main: %d\n\n", globalVar);
    
    // call other functions
    function1();
    function2();
    showScope();

    return 0;
}

void function1() {
    // this localVar is different from the one in main()
    int localVar = 25;
    
    printf("=== FUNCTION 1 ===\n");
    printf("Local variable in function1: %d\n", localVar);
    printf("Global variable in function1: %d\n\n", globalVar);
}

void function2() {
    // another localVar - also different from others
    int localVar = 75;
    
    printf("=== FUNCTION 2 ===\n");
    printf("Local variable in function2: %d\n", localVar);
    printf("Global variable in function2: %d\n\n", globalVar);
    
    // modify global variable
    globalVar = 200;
    printf("Global variable modified to: %d\n\n", globalVar);
}

void showScope() {
    printf("=== SHOW SCOPE ===\n");
    printf("Global variable (after modification): %d\n", globalVar);
    
    // block scope example
    {
        int blockVar = 10;
        printf("Variable inside block: %d\n", blockVar);
    }
    // blockVar is NOT accessible here
    // printf("%d", blockVar); // this would cause an error!
}

/*
 * VARIABLE SCOPE TYPES:
 * 
 * 1. LOCAL SCOPE:
 *    - declared inside a function or block {}
 *    - only accessible within that function/block
 *    - created when function is called, destroyed when it returns
 * 
 * 2. GLOBAL SCOPE:
 *    - declared outside all functions
 *    - accessible from any function in the file
 *    - exists for entire program duration
 * 
 * 3. BLOCK SCOPE:
 *    - declared inside {} blocks (if, for, while, etc.)
 *    - only accessible within that block
 * 
 * IMPORTANT:
 * - variables in different scopes can have the same name
 * - local variables "shadow" global variables with the same name
 * - use global variables sparingly (can make code harder to debug)
 */