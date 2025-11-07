#include <stdio.h>

// Function declarations
int getMax(int x, int y);
double square(double num);
int sum(int a, int b, int c);
char getGrade(int score);

int main() {

    // return = returns a value back to where you call a function

    // ========== EXAMPLE 1: finding maximum ==========
    int max = getMax(10, 25);
    printf("The maximum is: %d\n", max);

    // ========== EXAMPLE 2: squaring a number ==========
    double result = square(5.5);
    printf("5.5 squared is: %.2lf\n", result);

    // ========== EXAMPLE 3: sum of three numbers ==========
    int total = sum(10, 20, 30);
    printf("The sum is: %d\n", total);

    // ========== EXAMPLE 4: getting a grade ==========
    char grade = getGrade(85);
    printf("Your grade is: %c\n", grade);

    return 0;
}

// function that returns the larger of two integers
int getMax(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
    // alternative: return (x > y) ? x : y;
}

// function that returns the square of a number
double square(double num) {
    return num * num;
}

// function that returns the sum of three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

// function that returns a grade based on score
char getGrade(int score) {
    if (score >= 90) {
        return 'A';
    }
    else if (score >= 80) {
        return 'B';
    }
    else if (score >= 70) {
        return 'C';
    }
    else if (score >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

/*
 * RETURN STATEMENTS:
 * 
 * structure:
 * return_type function_name(parameters) {
 *     // code
 *     return value;
 * }
 * 
 * - the return type must match the value being returned
 * - int function returns int
 * - double function returns double
 * - char function returns char
 * - void function returns nothing (no return statement needed)
 * - return immediately exits the function
 * - code after return will not execute
 */