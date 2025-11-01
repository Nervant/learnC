#include <stdio.h>

int main() {

    // format specifier = special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width and precision),
    //                    they control how data is displayed or interpreted

    int age = 17;
    float gpa = 3.75;
    double pi = 3.14159265359;
    char grade = 'A';
    char name[] = "Lelouch";

    // basic format specifiers
    printf("Age: %d\n", age);                  // %d = integer
    printf("GPA: %f\n", gpa);                  // %f = float
    printf("PI: %lf\n", pi);                   // %lf = double
    printf("Grade: %c\n", grade);              // %c = character
    printf("Name: %s\n\n", name);              // %s = string

    // precision with floats
    float price = 123.456789;
    printf("Price (default): %f\n", price);
    printf("Price (2 decimals): %.2f\n", price);
    printf("Price (1 decimal): %.1f\n\n", price);

    // width modifiers
    int num = 42;
    printf("Number: '%5d'\n", num);            // minimum width of 5
    printf("Number: '%10d'\n", num);           // minimum width of 10
    printf("Left-Aligned: '%-10d'\n\n", num);  // left-aligned

    return 0;
}

/*
 * common format specifiers:
 * %d  - integer
 * %f  - float
 * %lf - double
 * %c  - character
 * %s  - string
 * 
 * modifiers:
 * %.2f  - 2 decimal places
 * %10d  - minimum width of 10
 * %-10d - left-aligned, width 10
 */
