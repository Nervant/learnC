#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

    // getting integer input
    printf("Enter your age: ");
    scanf("%d", &age);

    // getting float input
    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    // getting character input
    printf("Enter your grade: ");
    scanf(" %c", &grade); // The space before %c is necessary to consume any leftover \n

    // getting string input
    getchar(); // clears \n from input buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // changes last char from \n to \0

    // display the results
    printf("\n--- Your Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}

/*
 * INPUT FUNCTIONS:
 * scanf()   - reads formatted input (numbers, chars)
 * fgets()   - reads a line of text (safer for strings)
 * getchar() - clears newline character from buffer
 * 
 * IMPORTANT:
 * - use & (address-of operator) with scanf for variables
 * - use a space before %c in scanf to consume leftover \n
 * - remove \n from fgets input: name[strlen(name) - 1] = '\0';
 * - clear buffer with getchar() before using fgets after scanf
 */
