#include <stdio.h>

int main() {

    // ternary operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false;

    // ========== EXAMPLE 1: FIND MAXIMUM ==========
    
    int num1 = 10;
    int num2 = 25;
    int max = (num1 > num2) ? num1 : num2;
    
    printf("The maximum is: %d\n", max);

    // ========== EXAMPLE 2: CHECK EVEN OR ODD ==========
    
    int number = 7;
    (number % 2 == 0) ? printf("%d is even\n", number) : printf("%d is odd\n", number);

    // ========== EXAMPLE 3: CHECK ADULT OR MINOR ==========
    
    int age = 20;
    char *status = (age >= 18) ? "Adult" : "Minor";
    printf("You are a(n): %s\n", status);

    // ========== EXAMPLE 4: NESTED TERNARY ==========
    
    int score = 75;
    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : 'F';
    printf("Your grade is: %c\n", grade);

    return 0;
}

/*
 * TERNARY OPERATOR:
 * 
 * syntax:
 * (condition) ? expression_if_true : expression_if_false;
 * 
 * equivalent to:
 * if (condition) {
 *     return expression_if_true;
 * }
 * else {
 *     return expression_if_false;
 * }
 * 
 * benefits:
 * - more concise than if-else
 * - can be used in assignments
 * - good for simple conditions
 * 
 * note:
 * - don't overuse nested ternaries (reduces readability)
 * - best for simple true/false decisions
 */