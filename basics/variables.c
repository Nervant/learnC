#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable = a reusable container for a value

    // int = whole numbers
    int age = 25;
    int year = 2025;
    printf("You are %d years old\n", age);
    printf("The year is %d\n\n", year);

    // float = stores decimal numbers, about 6-7 digits
    float gpa = 3.5;
    float price = 19.99;
    printf("Your GPA is %.2f\n", gpa);
    printf("The price is $%.2f\n\n", price);

    // double = more accurate than float, about 15-17 digits
    double pi = 3.14159265359;
    printf("PI = %.10lf\n\n", pi);

    // char = single character
    char grade = 'A';
    char initial = 'L';
    printf("Your grade is %c\n", grade);
    printf("Your initial is %c\n\n", initial);

    // char[] = array of characters (string)
    char name[] = "Linus";
    printf("Hello %s\n\n", name);

    // bool = true or false
    bool isStudent = true;
    printf("Are you a student? %d\n", isStudent); // 1 = true, 0 = false

    return 0;
}

/*
 * DATA TYPES:
 * int    - whole numbers
 * float  - decimals, 4 bytes
 * double - decimals, 8 bytes
 * char   - single character
 * char[] - string/array of characters
 * bool   - true/false (requires #include <stdbool.h>)
 */
