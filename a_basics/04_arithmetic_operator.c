#include <stdio.h>

int main() {

    // arithmetic operators: + - * / % ++ --
    
    int x = 10;
    int y = 2;
    int z = 0;

    // basic operations
    z = x + y;
    printf("%d + %d = %d\n", x, y, z);

    z = x - y;
    printf("%d - %d = %d\n", x, y, z);

    z = x * y;
    printf("%d * %d = %d\n", x, y, z);

    z = x / y;
    printf("%d / %d = %d\n", x, y, z);

    z = x % 2;
    printf("%d %% 2 = %d (remainder)\n\n", x, z);

    // increment and decrement
    x++; // x = x + 1
    printf("x++ = %d\n", x);

    x--; // x = x - 1
    printf("x-- = %d\n\n", x);

    // augmented assignment operators
    x += 3; // x = x + 3
    printf("x += 3: %d\n", x);

    x -= 3; // x = x - 3
    printf("x -= 3: %d\n", x);

    x *= 3; // x = x * 3
    printf("x *= 3: %d\n", x);

    x /= 3; // x = x / 3
    printf("x /= 3: %d\n", x);

    return 0;
}

/*
 * OPERATORS:
 * +  : addition
 * -  : subtraction
 * *  : multiplication
 * /  : division
 * %  : modulus (remainder)
 * ++ : increment by 1
 * -- : decrement by 1
 * 
 * AUGMENTED ASSIGNMENT:
 * += : add and assign
 * -= : subtract and assign
 * *= : multiply and assign
 * /= : divide and assign
 * %= : modulus and assign
 */
