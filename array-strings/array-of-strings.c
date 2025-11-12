#include <stdio.h>
#include <string.h>

int main(){
    // USER INPUT ARRAY OF STRINGS

    // declare 2D array to store 4 names, each up to 25 characters
    char names[4][25] = {0};
    
    // calculate number of rows (number of names)
    int rows = sizeof(names) / sizeof(names[0]);
    
    // get names from user
    for(int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0'; // Remove newline character
    }
    
    printf("\n");
    
    // display all names
    for(int i = 0; i < rows; i++){
        printf("%s ", names[i]);
    }
    
    return 0;
}

/*
 * NOTE:
 * this demonstrates how to get user input for an array of strings
 * and display them back
 */