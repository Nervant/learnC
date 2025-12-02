#include <stdio.h>
#include <stdbool.h>

int main() {

    // nested if = an if statement inside another if statement
    //             allows for more complex conditions

    float price = 10.00;
    bool isStudent = true;  // 10% discount
    bool isSenior = true;   // 20% discount
    
    // student = $9
    // senior = $8
    // student + senior = $7

    // check if user is a student
    if (isStudent) {
        // if student, check if also a senior
        if (isSenior) {
            printf("You get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price *= 0.7; // apply both discounts (30% off)
        }
        else {
            printf("You get a student discount of 10%%\n");
            price *= 0.9; // apply student discount (10% off)
        }
    }
    else {
        // not a student, check if senior
        if (isSenior) {
            printf("You get a senior discount of 20%%\n");
            price *= 0.8; // apply senior discount (20% off)
        }
    }

    printf("The price of a ticket is: $%.2f\n", price);
    
    return 0;
}

/*
 * NESTED IF STRUCTURE:
 * 
 * if (condition1) {
 *     if (condition2) {
 *         // code if both conditions are true
 *     }
 *     else {
 *         // code if condition1 is true but condition2 is false
 *     }
 * }
 * else {
 *     if (condition3) {
 *         // code if condition1 is false but condition3 is true
 *     }
 * }
 * 
 * USE CASES:
 * - multiple conditions that depend on each other
 * - complex decision trees
 * - layered validation
 * 
 * TIP: can often be simplified using logical operators (&&, ||)
 */