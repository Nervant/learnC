#include <stdio.h>
#include <string.h>

// function declarations (prototypes)
void happyBirthday(char name[], int age);
void greet();
void sayGoodbye(char name[]);

int main() {

    // function = a reusable section of code that can be invoked "called"
    //            arguments can be sent to a function so that it can use them

    char name[50] = "";
    int age = 0;

    // get user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // remove newline

    printf("Enter your age: ");
    scanf("%d", &age);

    // call functions
    greet();
    happyBirthday(name, age);
    sayGoodbye(name);

    return 0;
}

// function with no parameters
void greet() {
    printf("\n==============================\n");
    printf("  BIRTHDAY CELEBRATION TIME!  \n");
    printf("==============================\n");
}

// function with parameters
void happyBirthday(char name[], int age) {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

// function with one parameter
void sayGoodbye(char name[]) {
    printf("\nHave a great day, %s!\n", name);
}

/*
 * FUNCTION BASICS:
 * 
 * structure:
 * return_type function_name(parameters) {
 *     // code to execute
 * }
 * 
 * void = function returns nothing
 * 
 * benefits:
 * - code reusability
 * - better organization
 * - easier to debug
 * - easier to maintain
 * 
 * function call: function_name(arguments);
 */