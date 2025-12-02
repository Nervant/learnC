#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // if statement = do some code if a condition is true

    // ========== EXAMPLE 1 ==========
    
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are an adult.\n");
    }
    else if (age >= 13) {
        printf("You are a teenager.\n");
    }
    else if (age > 0) {
        printf("You are a child.\n");
    }
    else {
        printf("Invalid age!\n");
    }
    
    // ========== EXAMPLE 2 ==========
    
    bool isStudent = true;
    
    if (isStudent) {
        printf("\nYou are a student.\n");
    }
    else {
        printf("\nYou are NOT a student.\n");
    }
    
    // ========== EXAMPLE 3 ==========
    
    char name[50] = "";
    
    getchar(); // clear input buffer
    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // remove newline
    
    if (strlen(name) == 0) {
        printf("You did not enter your name.\n");
    }
    else {
        printf("Hello %s!\n", name);
    }

    return 0;
}

/*
 * IF-ELSE STRUCTURE:
 * 
 * if (condition) {
 *     // code if condition is true
 * }
 * else if (another_condition) {
 *     // code if another condition is true
 * }
 * else {
 *     // code if all conditions are false
 * }
 * 
 * COMPARISON OPERATORS:
 * ==  equal to
 * !=  not equal to
 * >   greater than
 * <   less than
 * >=  greater than or equal to
 * <=  less than or equal to
 */