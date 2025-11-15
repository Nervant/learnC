#include <stdio.h>

// enum = a user-defined data type that consists
//        of a set of named integer constants.
//        Benefit: Replaces numbers with readable names

// define enums at the top
enum Day {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
enum Status {PENDING, APPROVED, REJECTED};
enum Color {RED = 0, GREEN = 1, BLUE = 2};

int main() {

    // ========== EXAMPLE 1: DAYS OF THE WEEK ==========
    
    enum Day today = FRIDAY;
    
    printf("Today is day number: %d\n", today);
    
    if (today == FRIDAY) {
        printf("It's Friday!\n\n");
    }

    // ========== EXAMPLE 2: STATUS CODES ==========
    
    enum Status orderStatus = APPROVED;
    
    printf("Order status: %d\n", orderStatus);
    
    switch(orderStatus) {
        case PENDING:
            printf("Order is pending\n\n");
            break;
        case APPROVED:
            printf("Order is approved\n\n");
            break;
        case REJECTED:
            printf("Order is rejected\n\n");
            break;
    }

    // ========== EXAMPLE 3: COLORS ==========
    
    enum Color favoriteColor = BLUE;
    
    printf("Favorite color code: %d\n", favoriteColor);

    return 0;
}

/*
 * ENUM:
 * 
 * syntax:
 * enum EnumName {VALUE1, VALUE2, VALUE3};
 * 
 * default values:
 * - starts at 0 and increments by 1
 * - can assign custom values: {RED = 5, GREEN, BLUE} → 5, 6, 7
 * 
 * usage:
 * enum EnumName variable = VALUE1;
 * 
 * benefits:
 * - Makes code more readable (MONDAY vs 1)
 * - Prevents invalid values
 * - Self-documenting code
 * - Easier to maintain
 * 
 * common uses:
 * - days of the week
 * - months
 * - Status codes
 * - directions (NORTH, SOUTH, EAST, WEST)
 * - game states (MENU, PLAYING, PAUSED, GAMEOVER)
 */