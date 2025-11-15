#include <stdio.h>

// typedef declarations at the top
typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability
    //           typedef existing_type new_name;

    // ========== EXAMPLE 1: SIMPLE TYPEDEF ==========

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("Sum: %d\n", z);

    // ========== EXAMPLE 2: STRING TYPEDEF ==========

    String name = "Bro Code";
    printf("Name: %s\n", name);

    // ========== EXAMPLE 3: MULTIPLE VARIABLES WITH TYPEDEF ==========

    Initials user1 = "BC";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("\nUser Initials:\n");
    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}

/*
 * TYPEDEF:
 * 
 * syntax:
 * typedef existing_type new_name;
 * 
 * common uses:
 * typedef int Integer;
 * typedef float Decimal;
 * typedef char String[100];
 * 
 * benefits:
 * - makes code more readable
 * - easier to change types later
 * - simplifies complex type declarations
 * - commonly used with structs
 * 
 * note:
 * - typedef declarations usually go at the top of the file
 * - does not create a new type, just an alias
 */