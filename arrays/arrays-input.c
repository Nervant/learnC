#include <stdio.h>

int main() {

    int prices[5] = {0};

    printf("Enter 5 prices:\n");

    for(int i = 0; i < 5; i++){
        printf("Price #%d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    printf("\nYou entered:\n");

    for(int i = 0; i < 5; i++){
        printf("%d\n", prices[i]);
    }

    return 0;
}

/*
 * AN ARRAY WITH USER INPUT:
 * 
 * steps:
 * 1. declare an array large enough to hold your values
 * 2. use a for loop with scanf() to store values
 * 3. use another loop to display them
 */
