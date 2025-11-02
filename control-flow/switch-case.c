#include <stdio.h>

int main() {

    // switch = an alternative to using many if-else statements
    //          more efficient with fixed integer values

    char dayOfWeek = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    // switch statement to check which day was entered
    switch(dayOfWeek) {
        case 'M':
            printf("It is Monday\n");
            break;
        case 'T':
            printf("It is Tuesday\n");   
            break;
        case 'W':
            printf("It is Wednesday\n");   
            break;
        case 'R':
            printf("It is Thursday\n");   
            break;
        case 'F':
            printf("It is Friday\n");   
            break;
        case 'S':
            printf("It is Saturday\n");   
            break;
        case 'U':
            printf("It is Sunday\n");   
            break;
        default:
            printf("Please only enter a character (M, T, W, R, F, S, U)\n");
    }
    
    return 0;
}

/*
 * SWITCH STATEMENT STRUCTURE:
 * 
 * switch(variable) {
 *     case value1:
 *         // code to execute
 *         break;
 *     case value2:
 *         // code to execute
 *         break;
 *     default:
 *         // code if no cases match
 * }
 * 
 * IMPORTANT:
 * - break; prevents "fall-through" to next case
 * - default: is optional, runs if no cases match
 * - works with: int, char (not strings or floats)
 * - more efficient than multiple if-else for fixed values
 */