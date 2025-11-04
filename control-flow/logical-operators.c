#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators = used to combine or modify boolean expressions
    // && = AND (both conditions must be true)
    // || = OR (at least one condition must be true)
    // !  = NOT (reverses the boolean value)

    // ========== AND (&&) OPERATOR ==========
    
    float temp = 25;
    bool isSunny = true;
    
    // both conditions must be true
    if (temp >= 20 && temp <= 30 && isSunny) {
        printf("The weather is good!\n");
    }
    else {
        printf("The weather is bad!\n");
    }
    
    // ========== OR (||) OPERATOR ==========
    
    int age = 16;
    
    // at least one condition must be true
    if (age < 18 || age > 65) {
        printf("You get a discount!\n");
    }
    else {
        printf("You pay full price.\n");
    }
    
    // ========== NOT (!) OPERATOR ==========
    
    bool hasLicense = false;
    
    // reverses the boolean value
    if (!hasLicense) {
        printf("You cannot drive.\n");
    }
    else {
        printf("You can drive.\n");
    }
    
    // ========== COMBINING OPERATORS ==========
    
    int score = 85;
    bool isMember = true;
    
    // complex condition using multiple operators
    if ((score >= 80 && isMember) || score >= 90) {
        printf("You qualify for the bonus!\n");
    }
    else {
        printf("You do not qualify.\n");
    }

    return 0;
}

/*
 * LOGICAL OPERATORS:
 * 
 * && (AND)  - returns true if BOTH conditions are true
 *             example: (x > 5 && x < 10) → true only if x is between 5 and 10
 * 
 * || (OR)   - returns true if AT LEAST ONE condition is true
 *             example: (x < 5 || x > 10) → true if x is less than 5 OR greater than 10
 * 
 * !  (NOT)  - reverses the boolean value
 *             example: !true → false, !false → true
 */